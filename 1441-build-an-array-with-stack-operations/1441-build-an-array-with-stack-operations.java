class Solution {
    public List<String> buildArray(int[] target, int n) {
       List<String>list=new ArrayList<>();
        
      // 
       int  max=Integer.MIN_VALUE;
        
        for(int i=0;i<target.length;i++)
            if(target[i]>max)max=target[i];
        
         int map[]=new int[max+1];
          for(int i=0;i<target.length;i++)
              map[target[i]]++;
        
        for(int i=1;i<=n&&i<=max;i++){
            if(map[i]>0)
                list.add("Push");
            
            else {
              list.add("Push");
            list.add("Pop");
            }
        }
        
      //  if(n>target.length)
      // list.add("Push");
        return list;
    }
}