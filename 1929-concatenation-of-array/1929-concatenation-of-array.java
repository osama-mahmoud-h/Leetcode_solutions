class Solution {
    public int[] getConcatenation(int[] nums) {
        int []ans=new int [nums.length*2];
        ans =Arrays.copyOf(nums,ans.length);
        int i=nums.length;
        while(i<ans.length){
            ans[i]=nums[i-nums.length];
            i++;
        }
        return ans;
    }
}