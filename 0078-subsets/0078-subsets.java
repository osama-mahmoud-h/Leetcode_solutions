class Solution {
    List<Integer>tmp=new ArrayList<>();
   List<List<Integer>>ans=new ArrayList<>();
    public List<List<Integer>> subsets(int[] nums) {
        ans.add(new ArrayList<>());
        for(int i=0;i<nums.length;i++)
            subset(i,nums);
        return ans;
    }
     public  void subset(int st,int[] ar){
       if(st>=ar.length)return;
        tmp.add(ar[st]);
        for(int i=st+1;i<ar.length;i++)
            subset(i,ar);

        ans.add(new ArrayList<>(tmp));
        tmp.remove(tmp.size()-1);
    }
}