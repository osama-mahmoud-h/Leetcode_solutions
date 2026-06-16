class Solution {
    void remove_last(string &s){
        if(!s.empty())
            s.pop_back();
    }
    void duplicate(string &s){
        if(!s.empty())
            s = s+s;
    }
    void _reverse(string &s){
        if(!s.empty())
            reverse(s.begin(), s.end());
    }

public:
    string processStr(string s) {
        string ans = "";
        for(const auto & ch : s){
            if(ch =='#')
                duplicate(ans);
            else if(ch =='%')
                _reverse(ans);
            else if(ch =='*')
                remove_last(ans);
            else ans += ch ;
        }

        return ans;
    }
};