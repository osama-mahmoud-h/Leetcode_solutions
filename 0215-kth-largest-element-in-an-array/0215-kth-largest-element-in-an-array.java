class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> mxh = new PriorityQueue<>((a, b)->Integer.compare(b,a));

        for(int i : nums ){
            mxh.add(i);
        }

        while(k-- > 1){
            mxh.poll();
        }

        return mxh.poll();
    }
}