class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int []temp=new int [nums.length];
        int count =0,max;
        
        for(int i=0;i<nums.length;i++){
            count =0;
            
            for(int j=0;j<nums.length;j++)
            {
                if(nums[i]==nums[j])continue;
                if(nums[i]>nums[j])count++;
            }
            temp[i]=count;
            
           }
        return temp;
    }
}