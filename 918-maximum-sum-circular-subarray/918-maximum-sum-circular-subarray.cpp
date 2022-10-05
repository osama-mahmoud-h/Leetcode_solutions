class Solution {
    
int pivot(vector<int>&nums){
    int idx=0;
    int mn=0;

    for (int i = 0; i <nums.size() ; ++i) {
        int sum=0;
        int stIdx=i;
        bool in=false;
        while (i<nums.size()&&(nums[i]<0||sum+nums[i]<0)){
            sum+=nums[i++];
            if(sum<mn){
            mn=sum;
            idx=stIdx;
        }
            in=true;
        }
        if(in)i--;
        
    }
    return idx;
}

     int recur(vector<int>& nums,int i,bool takeIt,vector<vector<int>>&memo){

        if(i>=nums.size()){
           return takeIt ? 0 : -10e8; 
        }
        if(memo[i][takeIt]!=-1){
            return memo[i][takeIt];
        }
        if(takeIt){
            memo[i][takeIt]=max(0,nums[i]+recur(nums,i+1,1,memo));
            return  memo[i][takeIt];
        }
        
        int take = nums[i]+recur(nums,i+1,1,memo) ;
        int notTake = recur(nums,i+1,0,memo); 
        memo[i][takeIt]=max(take,notTake);
        return max(take,notTake);
    }
    
public:    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        
        int pvt=pivot(nums);
        vector<int>ar;

        for(int i=pvt;i<n;i++){
            ar.push_back(nums[i]);
        }
         for(int i=0;i<pvt;i++){
            ar.push_back(nums[i]);
        }
    
       /* for(auto i:ar){
            cout<<i<<"  ";
        }*/
        vector<vector<int>>memo(n,vector<int>(2,-1));
        
        int two = recur(ar,0,0,memo);
           memo= vector<vector<int>>(n,vector<int>(2,-1));
    
        int one = recur(nums,0,0,memo);
        return max(one,two);
    }
};