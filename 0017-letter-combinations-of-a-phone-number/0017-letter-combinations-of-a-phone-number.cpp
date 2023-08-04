
class Solution {
private:
    void helper(vector<string>&ans, unordered_map<char,string>&btns, string &digits,string &tmp, int idx){
        int n = digits.length();
        
        if(tmp.length()==n){
            ans.push_back(tmp);
        }
        if(idx>=n){
            return ;
        }
         for(auto c : btns[digits[idx]]){
             tmp += c;
             helper(ans,btns,digits,tmp,idx+1);
             tmp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return vector<string>{};
        }
        unordered_map<char,string>btns;
        btns['2'] = "abc";
        btns['3'] = "def";
        btns['4'] = "ghi";
        btns['5'] = "jkl";
        btns['6'] = "mno";
        btns['7'] = "pqrs";
        btns['8'] = "tuv";
        btns['9'] = "wxyz";
        vector<string> ans;
        string tmp = "";
        helper(ans, btns, digits, tmp, 0);
       // cout<<"ans.szie "<<ans.size()<<"\n";
        return  ans;
    }
};
