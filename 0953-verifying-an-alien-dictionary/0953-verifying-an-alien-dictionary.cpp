class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char,int>map;

        for(int i=0;i<26;i++ ){
            map[order[i]]=i;
        }

      int n = words.size();
          
         for(int i=0;i<n-1;i++){
              for(int j=0;j<words[i].length();j++){
                  
                  if(j>=words[i+1].length()){
                      return 0;
                  }
                  if(words[i][j]!=words[i+1][j]){
                      if(map[words[i+1][j]] < map[words[i][j]]){
                          return 0;
                      }
                      break;
                  }
              }
             // if(words[i].length()>words[i+1].length()){return 0;}
          }
                // if(cnt==n-1)return 1 ;
            
        
return 1;
    }
};