class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n*2);
        for(int i=0,j=n,f=0;j<2*n;i++,j++,f+=2)
           {
            ans[f]=nums[i];
            ans[f+1]=nums[j];
        }
        return ans;
    }
};