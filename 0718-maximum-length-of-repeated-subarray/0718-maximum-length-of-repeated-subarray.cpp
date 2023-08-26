
class Solution {
private:
    vector<vector<int>>memo;
    int helper(vector<int>& nums1, vector<int>& nums2,int &res, int i,int j){
        if(i>= nums1.size() || j>= nums2.size()){
            return 0;
        }

        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        
        int tmp = 0;
        if(nums1[i]==nums2[j]){
           tmp = 1 + helper(nums1,nums2,res,i+1,j+1) ;
            //cout<<"i:"<<i<<" ,j:"<<j<<" ,ans:"<<tmp<<"\n";
        }
         helper(nums1,nums2,res,i+1,j);
         helper(nums1,nums2,res,i,j+1);
         res = max(tmp,res);
        return memo[i][j] = tmp;
    }
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int res = 0;
        memo = vector<vector<int>>(n1,vector<int>(n2,-1));
        helper(nums1,nums2,res,0,0);
        return res;
    }
};
/*
[0,1,1,1,1]
[1,0,1,0,1]
*/