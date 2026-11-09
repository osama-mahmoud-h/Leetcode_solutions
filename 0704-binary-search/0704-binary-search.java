class Solution {
    public int search(int[] nums, int target) {
        int n = nums.length;
        int l = 0, h = n;
        while(l < h){
            int mid = l + (h-l) / 2;
            if(target < nums[mid])
                h = mid;
            else if(target > nums[mid])
                l = mid +1 ;
            else return mid;    

        }
        return -1;
    }
}