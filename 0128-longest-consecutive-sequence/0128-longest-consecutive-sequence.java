class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = ConcurrentHashMap.newKeySet();
        for (int num : nums) {
            set.add(num);
        }
        int ans = 0;
        for (Integer i : set) {
            int cur = i ,cnt = 1;
           while (set.contains(++cur)){
                ++cnt;
                set.remove(cur);
            }
            cur = i;
            while (set.contains(--cur)){
                ++cnt;
                set.remove(cur);
            } 

            ans = Math.max( ans, cnt);
        }

        return ans;
    }
}

/***

1,2,3, 1000,1002, 1004,
 */