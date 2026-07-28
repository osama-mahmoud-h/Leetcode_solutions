class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>map(26, 0);
        for(auto const&c : s){
            map[c-'a']++;
        }
        int middle = -1;
        string left = "", ans = "";
        for (int i = 0;i<26; i++){
            if(map[i] % 2 == 1){
                middle = i;
            }
            for(int j = 0; j<map[i]/2 ;j++){
              left += (i+'a');
             // right = char(i + 'a')+ right;   
            }
        }
        ans = left;
        reverse(left.begin(), left.end());

        return ans + (middle != -1 ? std::string(1, char(middle + 'a')) : "") + left;
    }
};