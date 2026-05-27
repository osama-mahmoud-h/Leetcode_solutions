class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> l(26,-1), h (26,-1);
        int ans = 0, n = word.size();

        int j = 0;
        for(const char &c: word){
            if (islower(c))
                l[c-'a'] = j++;
            else if(h[c-'A']==-1) h[c-'A'] = j++;    
        }
        for (int i= 0; i <26; i++){
           if(l[i] !=-1 and h[i]!=-1 and l[i] < h[i]){
                ans++;
           }
        }
        return ans;
    }
};