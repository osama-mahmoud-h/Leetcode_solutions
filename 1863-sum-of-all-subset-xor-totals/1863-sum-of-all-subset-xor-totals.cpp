class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=1;i<(1<<n);i++){
            int shft=1;
            int xorSubset=0;
            int j=0;
            while(shft<=i){
                if(shft&i){
                    xorSubset^=nums[j];
                }
                shft<<=1;
                j++;
            }  
            ans+=xorSubset;
        }
        
        
        return ans;
    }
};