class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
           vector<int>map(26,0);
           int mx = -1;
        for(int i = 0; i < s.length(); i++){
            if(map[s[i]-'a'] > 0){
                  if(map[s[i]-'a'] > 0){
                      mx = max(mx, i-map[s[i]-'a']);
                  }
                continue;
            }
           map[s[i]-'a'] = i + 1;
        }
      
        return mx;
    }
};