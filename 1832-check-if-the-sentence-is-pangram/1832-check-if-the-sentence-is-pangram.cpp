class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>map(26,0);
        for(auto c:s){
            map[c-'a']++;
        }
        for(auto i:map){
            if(i==0){
                return 0;
            }
        }
        return 1;
    }
};