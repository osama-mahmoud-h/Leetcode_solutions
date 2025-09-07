class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n,0);
        for(int i = 0, j = n-1; i<j; i++, j--){
            ans[i] = -(j + 1);
            ans[j] = (j + 1);
        }
        return ans;
    }
};