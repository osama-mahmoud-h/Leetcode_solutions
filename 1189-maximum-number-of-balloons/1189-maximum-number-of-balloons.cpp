class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string bal_str = "balloon";
        vector<int> bals(26,0), map(26, 0);
        
        for(const char&c : bal_str)
            bals[c-'a']++;
        
        for(const char c: text){
            map[c-'a']++;
        }
        int mx_word = INT_MAX;    
        for(int i = 0; i< 26; i++){
            if(!bals[i])
                continue;
            mx_word = min(mx_word, map[i]/bals[i]);
        }

        return mx_word;   
    }
};