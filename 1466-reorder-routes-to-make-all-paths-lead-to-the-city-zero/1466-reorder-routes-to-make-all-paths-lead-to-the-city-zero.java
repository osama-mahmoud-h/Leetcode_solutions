class Solution {
    List<Integer>[]adj;
    Set<Pair<Integer,Integer>>set;
    int ans;
    public int minReorder(int n, int[][] connections) {
        adj=new ArrayList[n];
        set=new HashSet<>();
        ans=0;
        for(int i=0;i<n;i++)
            adj[i]=new ArrayList<>();
        
        for(int r[]:connections){
            adj[r[0]].add(r[1]);
            adj[r[1]].add(r[0]);
            set.add(new Pair<>(r[0],r[1]));
        }
        boolean []visited=new boolean[n];
        dfs(adj,0,visited);
        
        return ans;
    }
    void dfs(List<Integer>[]adj,int start, boolean []visited){
        visited[start]=true;
        List<Integer>nieghbors=adj[start];
        for(Integer nieghbor:nieghbors){
            if(!visited[nieghbor]){
                if(set.contains(new Pair<>(start,nieghbor)))
                    ans++;
                dfs(adj,nieghbor,visited);
            }
        }
    }
}