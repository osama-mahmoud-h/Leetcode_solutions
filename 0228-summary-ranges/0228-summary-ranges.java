class Solution {
    public List<String> summaryRanges(int[] nums) {
        
        List<String>ans=new ArrayList<>();
        if(nums.length==0)return ans;
        int last=nums[0];
        int st=nums[0];
        for(int i=0;i<nums.length;i++ ){
            st=nums[i];
            last=st;
            while(i+1<nums.length&&nums[i+1]==last+1){last=nums[i+1];i++;}
            if(last==st)
                ans.add(Integer.toString(st));
            else{
                String res=Integer.toString(st)+"->"+Integer.toString(last);
                ans.add(res);
            }
             
        }
        return ans;
    }
}