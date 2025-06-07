class Solution {
public:
    string clearStars(string s) {
        int n = s.length();
        map<char,list<pair<char,int>>> char_index;
        
        for (int i = 0; i < n; ++i) {
            if(s[i] == '*'){ //delete smallest values , large index
                char_index.begin()->second.pop_back();
                if(char_index.begin()->second.empty())
                    char_index.erase(char_index.begin()->first);
            }else{
                char_index[s[i]].push_back({s[i],i});
            }    
        }
        vector<pair<char,int>> ar;
        for (const auto &item: char_index){
            for (const auto &val: item.second){
                ar.push_back(val);
            }
        }
        sort(ar.begin(), ar.end(),[&](pair<char,int>p1, pair<char,int>p2){
            return p1.second < p2.second;
        });

        string ans;
        for (const auto &item: ar)
            ans.push_back(item.first);
        return ans;
    }
};