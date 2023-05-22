class Solution {
    public int[] topKFrequent(int[] nums, int k) {
    
	 Map<Integer,Integer>map=new HashMap<>();
        List<Integer>[]order=new List[nums.length+1];
        for (int i:nums)
            map.put(i,map.getOrDefault(i,0)+1);

        for(int i:map.keySet()){
            if(order[map.get(i)]==null)
                order[map.get(i)]=new ArrayList();
            order[map.get(i)].add(i);
        }
        int ans[]=new int [k];
        int j=0;
        for (int i=nums.length;k>0;i--) {
            if(order[i]!=null){
                for (int l=0;l<order[i].size()&&k>0&&j<ans.length;l++) {
                    ans[j++]=order[i].get(l);k--;
                }
            }
        }
        return ans;
    }
}