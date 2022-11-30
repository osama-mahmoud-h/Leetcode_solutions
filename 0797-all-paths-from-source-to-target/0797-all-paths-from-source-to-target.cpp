class Solution {
    
    public void finedpath(int start,int[][] graph, List<Integer>path,List<List<Integer>> ans){
        
      for (int i:graph[start]){
          path.add(i);
          if(i==graph.length-1)
             { 
              ans.add(new ArrayList<>(path));
             }

          finedpath(i,graph,path,ans);
          path.remove(path.size()-1);
      }
  }
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer>path=new ArrayList<>();
        path.add(0);
        finedpath(0,graph,path,ans);
        return ans ;
    }
}