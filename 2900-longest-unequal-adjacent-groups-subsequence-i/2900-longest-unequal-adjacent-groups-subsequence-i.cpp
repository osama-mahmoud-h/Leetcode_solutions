class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        int n = groups.size();
        ans.push_back(words[0]);
       
        for (int i = 0; i < n-1; ++i) {
            if(groups[i]!= groups[i+1]){
                ans.push_back(words[i+1]);
            }
        }
        return ans;
    }
};