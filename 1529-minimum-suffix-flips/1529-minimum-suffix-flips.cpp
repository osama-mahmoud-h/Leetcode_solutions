class Solution {
public:
    int minFlips(string target) {
        int n = target.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            
            if(target[i]=='1'){
                while(i<n&&target[i]=='1'){
                    i++;
                }
                ans+=2;
            }
        }
        
        
        if(target[n-1]=='1')
            ans += ans>0 ? -1 :0;
        return ans;
    }
};