
class UnionFind{
public:
    vector<int> parent;
    vector<int> rank;
public:
    UnionFind(int n){
        parent = vector<int>(n);
        rank = vector<int>(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }
    ~UnionFind() {
        parent.clear();
        rank.clear();
    }

    int find(int x){
        return parent[x] = (parent[x] == x ? x : find(parent[x]));
    }

    void Union(int u, int v){
        int ru = find(u);
        int rv = find(v);
        if(ru == rv) return ;
        if(rank[ru] > rank[rv]) {
            parent[rv] = ru;
        } else if(rank[ru] < rank[rv]) {
            parent[ru] = rv;
        } else {
            parent[rv] = ru;
            rank[ru]++;
        }
    }

    const vector<int>& getParent() const {
        return parent;
    }
    vector<int> getGroup(int x) {
        int root = find(x);
        vector<int> group;
        for (int i = 0; i < parent.size(); i++) {
            if (find(i) == root) {
                group.push_back(i);
            }
        }
        return group;
    }
    int getNumSets() {
        int count = 0;
        for (int i = 0; i < parent.size(); i++) {
            if (parent[i] == i) {
                count++;
            }
        }
        return count;
    }
};

//////////////////////////////////////////////////////

class Solution {
public:
   vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
    sort(meetings.begin(), meetings.end(),
         [](auto &a, auto &b) { return a[2] < b[2]; });

    UnionFind uf(n);
    uf.Union(0, firstPerson);

    int i = 0, m = meetings.size();
    while (i < m) {
        int t = meetings[i][2];
        vector<int> involved;

        int j = i;
        while (j < m && meetings[j][2] == t) {
            uf.Union(meetings[j][0], meetings[j][1]);
            involved.push_back(meetings[j][0]);
            involved.push_back(meetings[j][1]);
            j++;
        }

        // rollback those not connected to 0
        for (int x : involved) {
            if (uf.find(x) != uf.find(0)) {
                uf.parent[x] = x;
            }
        }

        i = j;
    }

    return uf.getGroup(firstPerson);
    }
};