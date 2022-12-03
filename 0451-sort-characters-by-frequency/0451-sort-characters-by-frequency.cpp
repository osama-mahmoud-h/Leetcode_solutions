class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char,int>freq;
     for(auto c:s){
         freq[c]++;
     }   
     map<int,vector<char>>map;
     string ans="";
     
        for(auto i:freq){
            map[i.second].push_back(i.first);
        }
        
        for(auto vc:map){
            int cnt = vc.first;
            for(auto ch:vc.second){
            
                for(int i=0;i<cnt;i++)
                    ans+=ch;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};