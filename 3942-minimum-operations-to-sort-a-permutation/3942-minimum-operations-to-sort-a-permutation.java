class Solution {
    private boolean isSorted(int[] nums, int st, int end, boolean asc) {
        if (end - st <= 1)
            return true; // empty or single element
        int inc = asc ? 1 : -1;

        for (int i = st + 1; i < end; i++) {
            if (nums[i] != nums[i - 1] + inc)
                return false;
        }
        return true;
    }

    public int minOperations(int[] nums) {
        int n = nums.length;
        if (isSorted(nums, 0, n, true))
            return 0;
        else if (isSorted(nums, 0, n, false))
            return 1;

        int zeroIdx = -1;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                zeroIdx = i;
                break;
            }
        }

        if( ( isSorted(nums, 0, zeroIdx + 1, false) && isSorted(nums, zeroIdx + 1, n, false) )  ){
            return Math.min(n - zeroIdx , 2 + zeroIdx);
        }else if (isSorted(nums, 0, zeroIdx , true)  && isSorted(nums, zeroIdx + 1, n, true)){
            if(zeroIdx + 1 < n && nums[zeroIdx + 1] != 1)
                return -1;
            return Math.min(zeroIdx, 2 + n - zeroIdx);
        }
           

        return -1;
    }
}