class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        if(k > n)
            return 0;
        set<string>subsets;
        for(int i = 0; i <= n-k ;++i){
            subsets.insert(s.substr(i,k));
        }

        return pow(2,k) == subsets.size();
    }
};