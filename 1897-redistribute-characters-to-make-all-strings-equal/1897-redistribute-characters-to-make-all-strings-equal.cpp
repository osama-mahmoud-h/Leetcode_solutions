class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>freq;
        int n = words.size();
        for(const auto &word :words){
            for(const char &c:word){
                freq[c]++;
            }
        }
        
        for(const auto &item:freq ){
            if(item.second%n != 0)
                return 0;
        }
        return 1;
    }
};