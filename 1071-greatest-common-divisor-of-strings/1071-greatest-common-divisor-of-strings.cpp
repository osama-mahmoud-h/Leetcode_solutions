
class Solution {
private:
    bool is_prefix(const std::string &str1, const std::string &str2) {
        auto result = std::mismatch(str1.begin(), str1.end(), str2.begin());
        return (result.first == str1.end());
    }
public:
    string gcdOfStrings(string str1, string str2) {
        int n =  str1.length();
        int m = str2.length();
        
        string tmp = "";
        string ans = "";
        
        for (int i = 0; i < m; ++i) {
            tmp+=str2[i];
            
            string s1="",s2="";
            for (int j = 0; j < n/tmp.length(); ++j) {
                    s1+=tmp;
            }
            
            for (int j = 0; j < m/tmp.length(); ++j) {
                    s2+=tmp;
            }
                 
            
            if(s1==str1&&s2==str2)ans = tmp;
            
        }
        
        return ans;
    }
};

