class Solution {
    public boolean detectCapitalUse(String word) {
        if(word.length()==1   )return true;
          ///  if(word.length()==2&&Character.isUpperCase(word.charAt(0)))return true; 
//         else if(word.length()==2&& !Character.isUpperCase(word.charAt(0))&& Character.isUpperCase(word.charAt(1))) return false;
        
        boolean first= true;
        boolean second= true;
        
      if( Character.isUpperCase(word.charAt(0))&&Character.isUpperCase(word.charAt(1)))
         {
             for(int i=0;i<word.length();i++){
                 if(Character.isUpperCase(word.charAt(i))==false)return false ;
             }
         } else{
              for (int i = 1; i <word.length() ; i++)
                  if(Character.isUpperCase(word.charAt(i)))return false ;
         }
                     
                     
                     


                     return true;
         
    }
}