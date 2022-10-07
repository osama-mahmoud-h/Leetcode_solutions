class Solution {
    HashMap<String, Integer> dp;
    public int maxProduct(int[] nums) {
        int n = nums.length;
        dp = new HashMap();
        if(n == 0) return 0;
        return util(nums, n, 0, 1);
    }
    int util(int[] nums, int n, int index, int t){
        if(index == n) return t;
        String key = ""+index+t;
        if(dp.containsKey(key)) return dp.get(key);       
        
		// choice 1
        int x = util(nums, n, index+1, t*nums[index]);
		// choice 2
        int y = util(nums, n, index+1, nums[index]);
        if(index == 0){
            t = nums[0];
        }
		// keep the t (previous cal. value) and compare -> choice 3
        int ans = Math.max(t, Math.max(x, y));
        dp.put(key, ans);
        return ans;
    }
}