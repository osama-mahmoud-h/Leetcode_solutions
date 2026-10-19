class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        return IntStream.range(0, nums.length)
              .filter(i -> nums[i] == target)
              .boxed()
              .collect(Collectors.toList());
    }
}