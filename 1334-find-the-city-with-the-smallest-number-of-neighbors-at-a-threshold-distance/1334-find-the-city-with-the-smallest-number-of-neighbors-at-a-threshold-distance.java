class Solution {
    private class Edge{
        int u; int v; int weight;
        
        public Edge(int u, int v, int weight){
            this.u = u;
            this.v = v;
            this.weight = weight;
        }
        
        public String toString() {
            return "[" + this.u + ", " + this.v + ", " + this.weight+"]";
        }
    }
    
    public int findTheCity(int n, int[][] edges, int distanceThreshold) {
        List<Edge> edge_list = new ArrayList<>();
        List<List<Integer>> res = new ArrayList<>();
        int min = Integer.MAX_VALUE;
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            res.add(new ArrayList<>());
        }
        
        for(int[] edge: edges){
            edge_list.add(new Edge(edge[0], edge[1], edge[2]));
            edge_list.add(new Edge(edge[1], edge[0], edge[2]));
        }
        
        for(int i = 0; i < n; i++){
            int dist[] = new int[n];
            Arrays.fill(dist, Integer.MAX_VALUE);
            dist[i] = 0;
            
            for(int j = 0; j < n; j++){
                for(Edge curr: edge_list){
                    int source = curr.u;
                    int sink = curr.v;
                    int weight = curr.weight;

                    if(dist[source] != Integer.MAX_VALUE && dist[source]+weight < dist[sink]){
                        dist[sink] = dist[source]+weight;
                    }
                }
            }
            
            for(int j = 0; j < dist.length; j++){
                if(dist[j] != 0 && dist[j] <= distanceThreshold){
                    res.get(i).add(j);
                }
            }
            
            if(res.get(i).size() <= min){
                min = res.get(i).size();
                ans = i;
            }
        }

        return ans;
    }
}