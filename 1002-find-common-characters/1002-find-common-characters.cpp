class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>map(26, INT_MAX);
        vector<string> ans;
        
        for(const auto &word: words){
            vector<int>temp_map(26,0);
            
            for(const auto &c: word){
                temp_map[c-'a']++;
            }
            
            for(int i=0; i<26; i++){
                map[i] = min(map[i], temp_map[i]);
            }
        }
        
        for(int i=0; i<26; i++){
            for(int j=0;j<map[i];j++){
                char ch = 'a' + i;
                ans.push_back(string(1,ch));
            }
        }
        
        return ans;
    }
};