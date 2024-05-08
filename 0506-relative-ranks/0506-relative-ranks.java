class Solution {
    public String[] findRelativeRanks(int[] nums) {
       Map<Integer, Integer> map = new HashMap<>();
        for(int i=0;i<nums.length;i++) {
            map.put(nums[i],i);
        }
        String[] arr = new String[nums.length];
        Arrays.sort(nums);
        int size=nums.length;
        if((size-1)>=0)
            arr[map.get(nums[size-1])]="Gold Medal";
        if((size-2)>=0)
            arr[map.get(nums[size-2])]="Silver Medal";
        if((size-3)>=0)
            arr[map.get(nums[size-3])]="Bronze Medal";
        for(int i=size-4;i>=0;i--) {
            int index=map.get(nums[i]);
            arr[index]=String.valueOf(size-i);
        }
        return arr;
    }
}