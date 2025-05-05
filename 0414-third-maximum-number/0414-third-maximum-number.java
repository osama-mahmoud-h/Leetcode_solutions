class Solution {
    public int thirdMax(int[]nums) {
        
        PriorityQueue<Integer> pq = new PriorityQueue<>(3);
        for(int num: nums){
            if(!pq.contains(num)){
                pq.add(num);
                if(pq.size()>3){
                    pq.poll();
                }
            }
        }
        
        if(pq.size()==2){
            pq.poll();
        }

        return pq.poll();
        //   TreeSet<Integer> ts = new TreeSet();
        // for (int n : nums) {
        //     ts.add(n);
        //     if (ts.size() > 3) {
        //         ts.pollFirst();
        //     }
        // }
        // return ts.size() < 3 ? ts.last() : ts.first();
    
    }
}