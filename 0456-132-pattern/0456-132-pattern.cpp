
struct Node {
    int minVal;
    int maxVal;
};

class SegmentTree {
private:
    int n;
    int OO = INT_MAX;
    vector<Node> tree;

    void pull(int node) {
        tree[node].minVal = min(tree[node * 2].minVal, tree[node * 2 + 1].minVal);
        tree[node].maxVal = max(tree[node * 2].maxVal, tree[node * 2 + 1].maxVal);
    }

    void build(int node, int l, int r, const vector<int>& arr) {
        if (l == r) {
            tree[node] = {arr[l], arr[l]};
            return;
        }
        int mid = (l + r) / 2;
        build(node * 2, l, mid, arr);
        build(node * 2 + 1, mid + 1, r, arr);
        pull(node);
    }

    void update(int node, int l, int r, int idx, int value) {
        if (l == r) {
            tree[node] = {value, value};
            return;
        }
        int mid = (l + r) / 2;
        if (idx <= mid)
            update(node * 2, l, mid, idx, value);
        else
            update(node * 2 + 1, mid + 1, r, idx, value);
        pull(node);
    }

    // Search nearest greater to the LEFT of index (closer to idx first)
    int queryGreaterLeft(int node, int l, int r, int qr, int curVal) {
        if (l > qr || tree[node].maxVal <= curVal)
            return -OO;
        if (l == r)
            return l;
        int mid = (l + r) / 2;
        // search right child first (closer to idx)
        int right = queryGreaterLeft(node * 2 + 1, mid + 1, r, qr, curVal);
        if (right != -OO) return right;
        return queryGreaterLeft(node * 2, l, mid, qr, curVal);
    }

    int querySmallerLeft(int node, int l, int r, int qr, int curVal) {
        if (l > qr || tree[node].minVal >= curVal)
            return -OO; // use -1 for "not found"

        if (l == r)
            return l;

        int mid = (l + r) / 2;

        // Search left child first (closer to index 0)
        int left = querySmallerLeft(node * 2, l, mid, qr, curVal);
        if (left != -OO) return left;

        return querySmallerLeft(node * 2 + 1, mid + 1, r, qr, curVal);
    }
public:
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(1, 0, n - 1, arr);
    }

    void insert(int idx, int value) {
        update(1, 0, n - 1, idx, value);
    }

    int nearestGreaterLeft(int idx, int curVal) {
        if (idx - 1 < 0) return -OO;
        return queryGreaterLeft(1, 0, n - 1, idx - 1, curVal);
    }

    int nearestSmallerLeft(int idx, int curVal) {
        if (idx - 1 < 0) return -OO;
        return querySmallerLeft(1, 0, n - 1, idx - 1, curVal);
    }
};

class Solution {
private:
    int OO = INT_MAX;
public:
    bool find132pattern(vector<int>& nums) {
        SegmentTree st(nums);
        int n = nums.size();
        for (int i = 2; i < n; ++i) {
            int leftGreater = st.nearestGreaterLeft(i, nums[i]);
            int leftSmaller = st.nearestSmallerLeft(i, nums[i]);
            // cout<<"idx: "<<i<<"\n";
            // cout<<"leftGreater: "<<leftGreater<<", leftSmaller: "<<leftSmaller<<"\n";
            if(leftGreater != -OO && leftSmaller != -OO
             && leftSmaller < leftGreater
            )
                return 1;
        }
        return 0;
    }
};