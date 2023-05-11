
class Solution {
private:
    vector<vector<int>>memo;
    int helper(vector<int>&ar1,vector<int>&ar2,int i,int j){
        int n = ar1.size() , m = ar2.size();
        if(i>=n || j>=m){
            return 0;
        }
        if(memo[i][j]!=-1){
            return  memo[i][j];
        }
        if(ar1[i] == ar2[j]){
            return  memo[i][j] = 1 + helper(ar1,ar2,i+1,j+1);
        }
        int perm1 = helper(ar1,ar2,i+1,j);
        int perm2 = helper(ar1,ar2,i,j+1);

        return memo[i][j] = max(perm1,perm2);
    }
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(nums1,nums2,0,0);
    }
};