class Solution {
     Map<Character,String>map;
     List<String>res;
    public List<String> letterCombinations(String digits) {
       map=new HashMap<>();
        res=new ArrayList<>();
      
        map.put('2',"abc");
        map.put('3',"def");
        map.put('4',"ghi");
        map.put('5',"jkl");
        map.put('6',"mno");
        map.put('7',"pqrs");
        map.put('8',"tuv");
        map.put('9',"wxyz");
                StringBuilder sb=new StringBuilder();
        
        back(digits.toCharArray(),0,sb);
        
        return res;
        
    }
   void back(char[]ch,int pos,StringBuilder sb){
       if(pos>=ch.length)return;
       
       for(char c:map.get(ch[pos]).toCharArray()){
            sb.append(c);
           back(ch,pos+1,sb);
          if(sb.length()==ch.length)
           res.add(sb.toString());
           sb.deleteCharAt(sb.length()-1);
       }
       
   }
}