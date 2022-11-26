class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        vector<int>p_map(26,0);
        vector<int>sub_map(26,0);
        int n=s.length();
        int m=p.length();
        
        if(m>n)return ans;
        
        for(auto i:p){
           
        }
        for(int i=0;i<m;i++){
            p_map[p[i]-'a']++;
            sub_map[s[i]-'a']++;
        }

     
        for(int i = m; i<n; i++){
             
            bool flag=0;
            for(int j=0;j<26;j++){
                if(sub_map[j]!=p_map[j]){flag=1;break;};
            }
            sub_map[s[i-m]-'a']--;
            sub_map[s[i]-'a']++;
            if(flag){
                continue;
            }
            ans.push_back(i-m);
            
        }

          bool flag=0;
            for(int j=0;j<26;j++){
                if(sub_map[j]!=p_map[j]){flag=1;break;};
            }
         
            if(!flag){
             ans.push_back(n-m);
            }
             
        
            return ans;
    }
};