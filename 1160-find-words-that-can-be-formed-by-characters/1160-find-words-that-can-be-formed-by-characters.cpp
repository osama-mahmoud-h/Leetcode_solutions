class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        int map[26];
        fillAr(map,0,26);
        
         for (int i = 0; i < chars.length(); ++i) {
             map[chars[i]-'a']++;
         }
        
       
        for (auto str:words){
             bool found=true;
             int map2[26];
             fillAr(map2,0,26);
            for (int i = 0; i < str.length(); ++i) {
              map2[str[i]-'a']++;  
         }
             for (int i = 0; i < str.length(); ++i) {
                 if(map2[str[i]-'a']>map[str[i]-'a']){
                     found=false;
                     break;
                 }
              
         }
            
            if(found){
                ans+=str.length();
            }
        }
        
        
      return ans;  
    }
    
  void fillAr(int ar[],int val,int len){
   for (int i = 0; i < len; ++i){
       ar[i]=val;
   }
}
    
};