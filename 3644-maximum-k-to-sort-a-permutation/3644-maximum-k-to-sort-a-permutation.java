class Solution {
    public int sortPermutation(int[] nums) {
        int OO = Integer.MAX_VALUE;
        int k = OO, n = nums.length;

        for(int i = 0; i < n; i++){
            if(nums[i] != i){
                k &= nums[i];
            }           
        }

        return k == OO ? 0 : k;
    }
}