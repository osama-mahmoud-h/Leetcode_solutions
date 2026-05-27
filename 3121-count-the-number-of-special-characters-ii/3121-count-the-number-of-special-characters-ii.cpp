class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<list<int>> l(26), h (26);
        int ans = 0, n = word.size();

        int j = 0;
        for(const char &c: word){
            if (islower(c))
                l[c-'a'].push_back(j++);
            else h[c-'A'].push_back(j++);    
        }
        for (int i= 0; i <26; i++){
           if(!l[i].empty() and !h[i].empty()){
            if(l[i].back() < h[i].front())
                ans++;
           }
        }
        return ans;
    }
};