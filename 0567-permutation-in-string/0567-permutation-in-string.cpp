class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
     int m=s1.length() , n = s2.length();
        
        if(m>n){return 0;}

      //  sort(s1.begin(),s1.end());
        vector<int>map1(26,0) ,map2(26,0);
        for(auto c:s1){
            map1[c-'a']++;
        }
       
        for(int i=0;i<m;i++){
            map2[s2[i]-'a']++;
        }
        
        for(int i=m;i<n;i++){
            bool flag = 1;
           for(int i=0;i<26;i++){
               if(map1[i]!=map2[i]){flag=0;break;}
           }
            if(flag)
                return 1;
           map2[s2[i]-'a']++;
           map2[s2[i-m]-'a']--;
        }
        
           bool flag = 1;
           for(int i=0;i<26;i++){
               if(map1[i]!=map2[i]){flag=0;break;}
           }
            if(flag)
                return 1;
        
        return 0;
        
    }
};