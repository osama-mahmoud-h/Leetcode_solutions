class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int>p_map(26,0);
        for(auto i:p){
            p_map[i-'a']++;
        }
        
        

        int n=s.length();
        int m=p.length();
        
        for(int i = 0; i<=n-m; i++){
            string sub = s.substr(i,m);
            vector<int>sub_map(26,0);
            for(auto i:sub){
                sub_map[i-'a']++;
            }
            
            bool flag=0;
            for(int i=0;i<26;i++){
                if(sub_map[i]!=p_map[i]){flag=1;break;};
            }
            if(flag){
                continue;
            }
            
            ans.push_back(i);
            
        }
        
            return ans;
    }
};