​
class Solution {
private:
int OO = 1e6;
int helper(string w1, string w2){
int n = w1.length() , m = w2.length();
if(w1==w2){
return 0;
}
​
int delete_ = OO , insert_ = OO ,replace_ = OO;
//insertcase
if(n<m){
bool flag = 1;
for(int i=0; i<m; i++){
if(w1[i]!=w2[i]){
flag = 0;
string tmp = w1;
tmp.insert(i,1, w2[i]);
insert_=1+helper(tmp,w2);
}
}
if(flag){
insert_ = m-n;
}
​