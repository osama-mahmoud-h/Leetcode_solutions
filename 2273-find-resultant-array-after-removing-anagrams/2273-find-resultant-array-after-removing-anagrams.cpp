class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        ans.push_back(words[0]);
        for (int i = 1; i < n; ++i) {
            string cur_str = words[i];
            string top_str = ans.back();
            
            sort(cur_str.begin(), cur_str.end());
            sort(top_str.begin(), top_str.end());
            
            if(cur_str!=top_str)
                ans.push_back(words[i]);
        }
        return ans;
    }
};