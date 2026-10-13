
class Solution {
    public long maxAlternatingSum(int[] nums) {
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if(nums[i]< 0 ){
                nums[i] = -nums[i];
            }
        }
        Arrays.sort(nums);
        long ans = 0;
        int l = 0, h = n - 1;
        boolean neg = false;
        while (l <= h) {
            if(!neg){
                ans += nums[h] * nums[h--];
                neg = true;
            }else{
                ans -= nums[l] * nums[l++];
                neg = false;
            }
        }

        return ans;
    }
}