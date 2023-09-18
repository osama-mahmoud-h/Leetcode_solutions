struct Row {
    int index;
    int sum;
    Row(const std::vector<int>& row, int index) : index(index) {
        sum = accumulate(row.begin(), row.end(), 0);
    }
};
struct cmp{
    bool operator()(Row&r1,Row&r2){
        if(r1.sum==r2.sum){
            return r1.index > r2.index;
        }
        return r1.sum > r2.sum;
    }
};
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<Row,vector<Row>,cmp>pq;
        vector<int>ans;
        int n = mat.size(),i=0;
        while(i<n){
            pq.push( Row(mat[i],i));
            i++;
        }
        while(k--){
            ans.push_back(pq.top().index);
            pq.pop();
        }
        return ans;
    }
};