class Solution {
    int k;
    int n;
    int cnt=0;
    List<List<Integer>>ans;
    public List<List<Integer>> combine(int n, int k) {
        this.k=k;
        this.n=n;
        ans=new ArrayList<>();
        List<Integer>tmp=new ArrayList();
        for(int i=1;i<=n-k+1;i++)
        back(i,tmp);
              System.out.print(cnt+"  ");

        return ans;
    }
    void back(int pos,List<Integer>tmp){
           //return;
       //  System.out.print(tmp.toString()+"  ");
        tmp.add(pos);
        if(tmp.size()==k)
             {ans.add(new ArrayList(tmp));}
                      
        for(int i=pos+1;i<=n;i++)
           if(tmp.size()<k) back(i,tmp);
        cnt++;
              tmp.remove(tmp.size()-1);  
    }
}
