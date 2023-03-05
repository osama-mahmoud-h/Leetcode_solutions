class Solution {

    vector<int>memo;

    bool recur(string str, vector<string>& A){
        int n = A.size();
        if(str.empty()){
            return 1;
        }
        
        if(memo[str.length()]!=-1){
            return memo[str.length()];
        }
        
        bool completed = 0;
        for (string& word : A) {
            size_t found = str.find(word);
            //cout<<str<<" , sustr: "<<word<<"\n";
            if (found != string::npos && found==0){
              //  cout<<str<<" , sub: "<<str.substr(word.length())<<"\n";
                if(recur(str.substr(word.length()),A)){
                   completed = 1 ;
                    break;
                }
            }
            
        }
        memo[str.length()] = completed;

        return completed;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        memo = vector<int>(n+1,-1);
        return recur(s,wordDict);
    }
};