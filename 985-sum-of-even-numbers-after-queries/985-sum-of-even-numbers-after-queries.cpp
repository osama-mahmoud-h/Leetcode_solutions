class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even=0;
        vector<int> ans;
        
        for(auto i:nums){
            if((i&1)==0){
                even+=i;
            }
        }
        
        for(int i=0;i<queries.size();i++){
                int idx=queries[i][1];
                int val=queries[i][0];
            
                if( nums[idx]%2==0)even-= nums[idx];
            
              nums[idx]=val+nums[idx];
            
            if( nums[idx]%2==0)even+= nums[idx];
              ans.push_back(even);
                 
             // nums[i]+=val;
        }
        return ans;
    }
};