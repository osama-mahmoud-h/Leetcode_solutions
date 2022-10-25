class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1="",s2="";
        
        for(auto st:w1){
            s1+=st;
        }
          for(auto st:w2){
            s2+=st;
        }
        

        return s1==s2;
    }
};