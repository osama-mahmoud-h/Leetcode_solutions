class Solution {
public:
        int recur(vector<int>& nums,int i,bool takeIt,int cntNeg, vector<vector<vector<int>>>&memo){
        if(i>=nums.size()){
           return takeIt ? 1 : -1e6;
        }
        if(memo[i][takeIt][cntNeg%2]!=-1){
          //  cout<<nums[i]<<" , "<<memo[i][takeIt][cntNeg%2]<<"\n";
            return memo[i][takeIt][cntNeg%2];
        }
            
        if(takeIt){
          //  cout<<i<<" , "<<cntNeg<<"\n";
            if((cntNeg&1)==0){
                if(nums[i]<=0){
                 return memo[i][takeIt][cntNeg%2] = max(1,nums[i]*recur(nums,i+1,1,cntNeg+1,memo));
                }else{
                return memo[i][takeIt][cntNeg%2] = nums[i]*recur(nums,i+1,1,cntNeg,memo);
                }
            }else{
                if(nums[i]<=0)
                return memo[i][takeIt][cntNeg%2] = nums[i]*recur(nums,i+1,1,cntNeg+1,memo);
                return memo[i][takeIt][cntNeg%2] = nums[i]*recur(nums,i+1,1,cntNeg,memo);  
            }
        }
            
        int take = nums[i]*recur(nums,i+1,1,nums[i]<0?1:0,memo) ;
        int notTake = recur(nums,i+1,0,0,memo); 
            
        memo[i][takeIt][cntNeg%2]=max(take,notTake);
            
        return max(take,notTake);
    }
    int maxProduct(vector<int>& nums) {
    vector<vector<vector<int>>>memo(nums.size(),vector<vector<int>>(2,vector<int>(2,-1)));
          for (int i = 0; i <nums.size() ; ++i) {
        for (int j = 0; j <2 ; ++j) {
            for (int k = 0; k <2 ; ++k) {
                memo[i][j][k]=-1;
            }
        }
    }
        return recur(nums,0,0,0,memo);
    }
};















