class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        for( ;i<nums.size(); i++){
            if(!nums[i])
                k--;
            if(k<0){
                if(!nums[j])
                    k++;
                j++;
            }
            
          
        }
        return i-j;
    }
};






