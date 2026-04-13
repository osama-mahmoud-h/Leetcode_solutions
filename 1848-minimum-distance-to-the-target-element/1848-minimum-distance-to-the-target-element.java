class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        
        int min=(int)10e7;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                min=Math.min(min,Math.abs(start-i));
            }
        }
        return min;
    }
}