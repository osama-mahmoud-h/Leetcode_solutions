class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>cnt;
        
        for(const auto &edge : paths){
            cnt[edge[0]]+=2;
            cnt[edge[1]]++;
        }
        
        string ans = "";
        for(const auto &item : cnt){
            if(item.second==1){
                return item.first;
            }
        }
        
        return ans;
    }
};