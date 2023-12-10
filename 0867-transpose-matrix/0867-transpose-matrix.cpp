class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& ar) {
        int n = ar.size();
        int m = ar[0].size();
        vector<vector<int>>res(m,vector<int>(n,0));
        for (int i = 0; i <ar.size() ; i++) {
            for (int j = 0; j < ar[i].size(); j++) {
                res[j][i]=ar[i][j];
            }
        }
        
        return res;
    }
};