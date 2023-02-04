class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        
        int m=s1.length() , n = s2.length();
       // int str = s2.substr(0,h);
        for(int i=0;i<n-m+1;i++){
            string sub = s2.substr(i,m);
            sort(sub.begin(),sub.end());
            if(sub==s1){return 1;}
        }
        
        return 0;
        
    }
};