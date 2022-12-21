class Solution {
    public int specialArray(int[] nums) {
      int ans=0;
        for(int i=1;i<=nums.length;i++){
            ans=0;
            for(int j:nums)
                if(j>=i)ans++;
            if(ans==i)return ans;
        }
        return -1;
    }
}