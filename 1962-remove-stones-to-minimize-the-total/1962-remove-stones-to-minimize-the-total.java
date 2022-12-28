class Solution {
    public int minStoneSum(int[] piles, int k) {
        PriorityQueue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        
        for(int i:piles){
            pq.offer(i);
        }
        
        while(k>0){
            int top=pq.poll();
            top=top-(int)Math.floor(top/2);
            pq.offer(top);
            k--;
        }
        
      int sum=0;
        while(!pq.isEmpty()){
            sum+=pq.poll();
        }
        return sum;
    }
    }            