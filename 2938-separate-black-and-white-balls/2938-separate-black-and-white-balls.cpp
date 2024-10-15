class Solution {
public:
    long long minimumSteps(string s) {
        long long int ans = 0;
        int right = s.size();
        int cnt_0 = 0;
        
        while(--right>=0){
            if(s[right]=='0'){
                cnt_0++;
            }else{
                ans += cnt_0;
            }
        }

        return ans;
    }
};