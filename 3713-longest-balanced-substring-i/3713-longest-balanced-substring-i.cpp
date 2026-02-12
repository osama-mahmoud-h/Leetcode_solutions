class Solution {                                                              
  public:                                                                       
      int longestBalanced(string s) {                                  
          int n = s.size(), ans = 0;
          for (int l = 0; l < n; l++) {                                         
              int freq[26] = {};                                                
              int maxF = 0, distinct = 0;
              for (int r = l; r < n; r++) {
                  int c = s[r] - 'a';
                  if (freq[c]++ == 0) 
                        distinct++;
                        
                   maxF = max(maxF, freq[c]);

                  if (distinct * maxF == r - l + 1)
                      ans = max(ans, r - l + 1);
              }
          }
          return ans;
      }
  };
