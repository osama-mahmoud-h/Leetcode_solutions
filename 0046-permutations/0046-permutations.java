class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>>ans=new LinkedList<>();
        for(int i:nums){
            Set<Integer>seen=new HashSet<>();
            List<Integer>tmp=new LinkedList<>();
         per(i,nums,seen,tmp,ans);   
        }
        return ans;
    }
    
    void per(int src,int []nums,Set<Integer>seen,List<Integer>tmp, List<List<Integer>>ans){
        seen.add(src);
        tmp.add(src);
        if(tmp.size()==nums.length)ans.add(new LinkedList<>(tmp));
        for(int i:nums){
            if(!seen.contains(i))
                per(i,nums,seen,tmp,ans);
        }
        seen.remove(src);
     ((LinkedList<Integer>) tmp).removeLast();
    }
}