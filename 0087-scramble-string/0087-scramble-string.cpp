class Solution {
private:
    unordered_map<string,bool> memo;
    bool helper(string s1 ,string s2){
        if(s1==s2) return  1;
        if(s1.length()<=1)return 0;

        string key = s1+' '+s2;
        
        if(memo.find(key)!=memo.end()) return memo[key];
        
        int n = s1.length();
        bool flag = 0;

        for (int i = 1; i < n; ++i) {
            bool swap = helper(s1.substr(0,i),s2.substr(n-i,i))
                    and
                    helper(s1.substr(i,n-i),s2.substr(0,n-i));

            bool noSwap =  helper(s1.substr(0,i),s2.substr(0,i))
                           and
                           helper(s1.substr(i,n-i),s2.substr(i,n-i));

            if(swap||noSwap){
                flag = 1;
                break;
            }
        }

        return memo[key] = flag;
    }
public:
    bool isScramble(string s1, string s2) {
        return helper(s1,s2);
    }
};