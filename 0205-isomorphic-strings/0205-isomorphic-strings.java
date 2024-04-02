class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s == null || s.length() <= 1) return true;
        HashMap<Character, Character> map = new HashMap<Character, Character>();
        for(int i = 0 ; i< s.length(); i++){
            char a = s.charAt(i);
            char b = t.charAt(i);
            if(map.containsKey(a)){
                 if(map.get(a).equals(b))
                continue;
                else
                return false;
            }else{
                if(!map.containsValue(b))
                map.put(a,b);
                else return false;
                
            }
        }
        return true;
// //       //  if(s.length()!=t.length())return false;
        
//         Set<Character>sett=new HashSet<>();
//         Set<Character>sets=new HashSet<>();
//         if(s.length()==0)return true;
       
//        char curs=s.charAt(0); 
//        char curt=t.charAt(0); 
        
//         int i=0,j=0;
//         for( ; ; ){
//           //  System.out.println(curs+"   "+curt);
//              curs=s.charAt(i);
//             curt= t.charAt(i);
            
//             while(i<s.length()&&j<t.length()&&curs==s.charAt(i)&&curt==t.charAt(j)){i++;j++;sett.add(curt);sets.add(curs);
//                                                                                    }
            
//            // while(j<s.length()){j++;}
            
//                      if(i==s.length()||j==s.length())break;
//             if(i!=j||sett.size()>1||sets.size()>1)return false;
//             sett.clear();sets.clear();
           
           
//         }
        

//         return true;
    }
}