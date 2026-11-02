class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int med = n%2 == 0 ? ( nums[(n-1)/2] + nums[n/2])/2 :  nums[n/2];
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans += Math.abs(med - nums[i]);
        }
        return ans;
    }
}