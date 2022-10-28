class Solution {
public:
    int minTimeToType(string word) {
          int ans=0;
    char cur = 'a';
    for(auto c:word){
        int diff=abs((cur-'a')-(c-'a'));
       int mn=min(abs(26-diff),diff);
        ans+=mn;
       // cout<<mn<<"\n";
        cur=c;
    }
    return ans+word.size();
    }
};