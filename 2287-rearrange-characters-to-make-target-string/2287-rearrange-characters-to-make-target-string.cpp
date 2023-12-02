class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> smap(26,0);
        vector<int>tmap(26,0);
        int ans = INT_MAX;
        for(const auto &c:s){
            smap[c-'a']++;
        }
        for(const auto &c:target){
            tmap[c-'a']++;
        }
        
        for(const auto &c:target){
            int s_freq = smap[c-'a'];
            int t_freq = tmap[c-'a'];
            ans = min(s_freq/t_freq,ans);
            //smap[c-'a']--;
        }
        
        return ans;
    }
};