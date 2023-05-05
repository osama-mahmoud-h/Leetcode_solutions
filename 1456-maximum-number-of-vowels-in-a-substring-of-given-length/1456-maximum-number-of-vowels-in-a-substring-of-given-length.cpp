class Solution {
private:
    bool isVowl(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
public:
    int maxVowels(string s, int k) {
        int i=0 , n=s.length();
        int sum = 0 , ans=0;
        while (i<k){
            if(isVowl(s[i++]))sum++;
        }
        ans = max(sum,ans);

        while (i<n){
            if(isVowl(s[i]))sum++;
            if(isVowl(s[i-k]))sum--;
            ans = max(ans,sum);
            i++;
        }

        return ans;
    }
};
