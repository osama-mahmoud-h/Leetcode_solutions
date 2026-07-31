class Solution {
public:
    int minimumPushes(string word) {
        vector<int>map(26,0);
        vector<int>freq;
        for(const auto &c: word){
            map[c-'a']++;
        }
        for (int i = 0; i < 26; i++){
            if(map[i] == 0)
                continue;
            freq.push_back(map[i]); 
        }
        sort(freq.rbegin(), freq.rend());

        int ans = 0, n =  freq.size();

        for(int i = 0 ,k = 1; i < n; i+= 8, k++){
            for(int j = i; j< min(i+8, n) ; j++){
                ans += freq[j] * k;
            }
        }
        return ans;
    }
};

/**
class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0, n =  word.length();
        for(int i = 0 ,j = 1; i < n; i+= 8, j++){
            ans += min(8, n - i) * j;
        }
        return ans;
    }
};
*/