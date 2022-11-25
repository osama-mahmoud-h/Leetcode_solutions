class Solution {
public:
  int curPos(string &s){
  int i = s.length()-1;
    int cur = i+1;
    int back = 0;
    while (i>=0){
        if(s[i]!='#'){
            if(back>0){
                i--;
                back--;
            }else{
                s[--cur] = s[i--];
            }
        } else{
            while(i>=0&&s[i]=='#'){back++;i--;}
        }
    }
    return cur;
}
bool backspaceCompare(string s, string t) {
    t = t.substr(curPos(t),t.length()-curPos(t));
    s = s.substr(curPos(s),s.length()-curPos(s));
  //  cout<<t<<"  "<<s<<"\n";
   return t==s;
}
};