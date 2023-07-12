class Solution {
    boolean dfs(int start,int [][]graph,int []color){
        color[start]=1;
        for(int i:graph[start]){
           if(color[i]==1)return true;
            if(color[i]==0&&dfs(i,graph,color))return true;
            
        }
       color[start]=2;
        return false;
    }
    public List<Integer> eventualSafeNodes(int[][] graph) {
       
        List<Integer> ans=new ArrayList<>();
         int[] color=new int [graph.length];
        for(int i=0;i<graph.length;i++){
           
            if (!dfs(i,graph,color))
                ans.add(i);
        }
        
        
        return ans;
    }

}