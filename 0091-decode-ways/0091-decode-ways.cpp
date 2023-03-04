class Solution {
private:
    vector<vector<int>>memo;
    bool valid_num(string s){
        if(s[0]=='0')return 0;
        int n = stoi(s);
        return n>=1 && n<=26;
    }
    int recur(int idx,int prev,string&s){
        int n = s.length();
        if(idx >= n){
            return 1;
        }
        
        if(memo[idx][prev+1]!=-1){
            return memo[idx][prev+1];
        }
        int pick_one = 0 ,pick_more = 0;
        if(valid_num(s.substr(idx,1))){
            
            pick_one = recur(idx+1,idx ,s);
        }
        if((idx+2<=n) && valid_num(s.substr(idx,2))){
            pick_more = recur(idx+2,idx,s);
        }
        memo [idx][prev+1] = pick_one+pick_more;
        return pick_one + pick_more;
    }
public:
    int numDecodings(string s) {
        int n = s.length();
        memo = vector<vector<int>>(n+1,vector<int>(n+1,-1));
        return recur(0,-1,s);
    }
};