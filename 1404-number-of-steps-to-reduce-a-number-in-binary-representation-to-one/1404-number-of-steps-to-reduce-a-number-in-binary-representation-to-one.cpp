class Solution {
private:
    void addOne(string &s){
        int i = s.length();
        while(i >= 0 && s[i]!='0'){
            s[i] = '0';
            i--;
        }
        if(i>=0){
            s[i] = '1';
        }else{
            s = "1" + s;
        }
    }
public:
    int numSteps(string s) {
        int len = s.length();
        int steps = 0;

        while(s.length()>1){
            len = s.length()-1;
            if(s[len]=='0'){
                s.pop_back();
            }else{
                addOne(s);
            }
            steps++;
        }

        return steps;
    }
};