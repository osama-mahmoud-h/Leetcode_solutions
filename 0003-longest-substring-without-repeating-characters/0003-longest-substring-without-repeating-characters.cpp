class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int mx=0;
    unordered_map<char,int>map;
    int st=0;
    for (int i = 0; i <s.length() ; ++i) {
        if(map.find(s[i])!=map.end()){
                st=max(st,map[s[i]]+1);
        } 
         mx = max(mx,i-st+1);
          map[s[i]]=i;
    }
    return mx;
    }
};