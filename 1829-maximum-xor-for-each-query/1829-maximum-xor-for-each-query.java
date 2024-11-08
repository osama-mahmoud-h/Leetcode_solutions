class Solution {
    public int[] getMaximumXor(int[] nums, int maximumBit) {
        
        int max=(1<<maximumBit)-1;
        int xor=0;
        int n=nums.length;
        int ans[]=new int[n];
        
   // System.out.println(max);
        for(int i=0;i<n;i++){
            xor^=nums[i];
            ans[n-i-1]=xor^max;
        }
        // System.out.println(1^3);
        return ans;
    }
}