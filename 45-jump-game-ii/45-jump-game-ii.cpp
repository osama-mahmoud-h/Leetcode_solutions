class Solution {
public:
     unordered_map<int,int>memo;
    
    int helper(vector<int>&nums,int i){
      if(memo.find(i)!=memo.end()){
         // cout<<"i:"<<i<<" ,"<<memo[i]<<"\n";
            return memo[i];
        }
        if(i>=nums.size()-1){
          return 0;
        }
      
        
        int choices = nums[i];
        int mn=100000;
        for(int j=choices;j>=1;j--){
           mn=min(1+helper(nums,j+i),mn);        
        }
        memo[i]=mn;
        return mn;
    }
    int jump(vector<int>& nums) {
        return helper(nums,0);
    }
};