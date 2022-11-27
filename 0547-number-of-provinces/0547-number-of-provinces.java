class Solution {
    int n;
    int m;
    int []rank;
    int []parent;
    public int findCircleNum(int[][] M) {
        n=M.length;
        rank=new int [n];
        parent=new int [n];
        for(int i=0;i<n;i++)
            parent[i]=i;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                int x=find(i);
                int y=find(j);
                    if(y!=x){
                        union(x,y);
                    }
                }
            }
        }
        
        int ans=0;
         for (int i = 0; i <n ; i++) {
            if(parent[i]==i)
                ans++;
        }
        return ans;
    }
  int find(int i){
      if(parent[i]==i)return i;
      return parent[i]=find(parent[i]);
  }
    void  union(int a,int b){
        a=find(a);
        b=find(b);
        if(rank[a]<rank[b])swap(a,b);
          rank[a] += rank[b];
        parent[b] = a;
    }
     private void swap(int a, int b) {
        int tmp=a;
        a=b;
        b=tmp;
    }
}