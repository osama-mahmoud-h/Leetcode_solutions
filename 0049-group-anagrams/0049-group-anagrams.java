class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String> >map=new HashMap<>();
           List<List<String>> result=new ArrayList<>();

           for(String str:strs) {
               
               char[] temp = str.toCharArray();
               Arrays.sort(temp);
               String res = new String(temp, 0, temp.length);
               
               if (!map.containsKey(res)) {
                   map.put(res, new ArrayList<>());
               }

               map.get(res).add(str);
           }

           for(List<String> list :map.values()) {
               result.add(list);
           }

               return result;
    }
}