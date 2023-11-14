
class Solution {
public:
    int countPalindromicSubsequence(string s) {

        int ans = 0;
        for (int i = 0; i < 26; ++i) {
            char cur = 'a'+i;
            int mx = 0;
            int cnt = 0;
            unordered_map<char,int>map;
            for (const auto &item: s){
                if(item == cur &&cnt>1 && map.find(item)!=map.end()){
                      mx = map.size();
                      if(map[item]<2)
                          mx--;
                    
                }

                if(item==cur || map.find(cur)!=map.end()) {
                    map[item]++;
                    cnt++;
                }
            }
           // cout<<cur<<", "<<mx<<"\n";
            ans +=mx;
        }
        return ans;
    }
};