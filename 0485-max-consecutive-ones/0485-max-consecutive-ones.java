class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
        int max=0,count=0;
        for(int i=0;i<nums.length; i++){

            if(nums[i]==0)continue;
            count =0;
            while(i<nums.length&&nums[i]==1){
                count++;i++;
            }
            if(count>max)max=count;


        }
        return max;
    }
}