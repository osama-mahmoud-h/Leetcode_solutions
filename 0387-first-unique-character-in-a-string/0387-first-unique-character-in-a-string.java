class Solution {
    public int firstUniqChar(String s) {
 int []arr = new int[26];
        for(char ch:s.toCharArray())
            arr[ch-'a']++;
    
        for(int i=0;i<s.length();i++){
            if(arr[s.charAt(i)-'a']==1)
                return i;
        }
        return -1;
  /*   HashMap<Character,Integer>map=new HashMap<>();
  //   Set<Character>set=new HashSet<>();

    for(char c:s.toCharArray())
     {
       map.put(c,map.getOrDefault(c,0)+1);

     }
     System.out.println(map.get('e'));
     int indx=0;

     for(char c:s.toCharArray()){
     if(map.get(c)==1)return indx;
         indx++;
     }

    
     return -1;*/
    }
}