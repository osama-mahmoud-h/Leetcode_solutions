class Solution {
     int[]parent;
  //   int[]rank;
    class Edge{
        int from;
        int to;
        int cost;
       public Edge(int f,int t,int cst){
            from=f;
            to=t;
            cost=cst;
        }
    }
    
    public int minCostConnectPoints(int[][] points) {
        
        int n=points.length;
        
        Queue<Edge>pq = new PriorityQueue<>((e1,e2)->e1.cost-e2.cost);
    
        //insiate union find array
        parent = new int[n];
       // rank = new int[n];
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pq.add(new Edge(i,j,minDistance(points[i],points[j])));
            }
        }
        
        int cost = 0;
        int connected = 0;
        //start kurskal approach
        while(connected<n-1){
            Edge e = pq.poll();
            int pointA = e.from;
            int pointB = e.to;
            
            if(find(pointA)!=find(pointB)){
                cost+=e.cost;
                connected++;
                union(pointA,pointB);
            }
            
        }
       
       
        return cost;
    }
    private int minDistance(int[] x,int[] y){
        return Math.abs(x[0]-y[0])+Math.abs(x[1]-y[1]);
    }
    
 
    ///union fined 
   private int find(int i){
        if(i==parent[i])
            return i;
        return parent [i]=find(parent[i]);
    }
    
    private void union(int a,int b){
         parent[find(b)]=find(a);
            
    }
   
}