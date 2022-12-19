class Solution {
    public boolean validPath(int n, int[][] edges, int src, int dest) {
        
        int[] parents=new int[n];
          makeSet(parents,n);
        
        for(int[]row:edges){
            int f=row[0];
            int l=row[1];
          
            union(parents,f,l);
           /*  if(isSameSet(parents,src,dest)){
               return true;
           }*/
        }
        return (isSameSet(parents,src,dest));
    }
    
private void makeSet(int p[],int n){
    for(int i=0;i<n;i++){
        p[i]=i;
    }
}    
public int findSet(int []p,int i) 
{ return p[i] == i ? i : (p[i] = findSet(p,p[i])); }

public boolean isSameSet(int []p,int i, int j)
{ return findSet(p,i) == findSet(p,j); }
   
// Naive implementation of union()
private void union(int parent[], int x, int y)
{
    int xset = findSet(parent, x);
    int yset = findSet(parent, y);
    parent[xset] = yset;
}
}