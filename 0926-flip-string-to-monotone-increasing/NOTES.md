​
class Solution{
private:
int OO = 1e6;
int hepler(string &s,int idx,int prev){
if(idx>=s.length()){
return 0;
}
if(prev==1&&(s[idx]-'0')==0){
return OO;
}
int change =0;
int not_chagne = OO;
​
int cur = s[idx]-'0';
change = 1 + hepler(s,idx+1,cur==0?1:0);
not_chagne = hepler(s,idx+1,cur);
cout<<change<<" , "<<not_chagne<<"\n";
return min(change,not_chagne);
}
public:
int minFlipsMonoIncr(string s) {
return hepler(s,0,0);
}