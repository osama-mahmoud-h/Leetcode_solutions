class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
         List<List<Integer>>ans=new ArrayList();
         Map<Integer,List<Integer>>map=new HashMap();
        int j=0;
        for(int i:groupSizes){
            if(!map.containsKey(i)){
                map.put(i,new ArrayList<>());
            }
            map.get(i).add(j);
            j++;
            if(map.get(i).size()==i){
                ans.add(new ArrayList(map.get(i)));
                 map.remove(i);
            }
        }
        
//       //  System.out.print(map);
//         for(int i:map.keySet()){
//             List<Integer>tmp=new ArrayList();
//             for(int k:map.get(i)){
//                  tmp.add(k);
//                 if(tmp.size()==i){
//                     ans.add(new ArrayList(tmp));
//                    tmp.clear();
//                 }
               
//             }
//         }
        return ans;
    }
}