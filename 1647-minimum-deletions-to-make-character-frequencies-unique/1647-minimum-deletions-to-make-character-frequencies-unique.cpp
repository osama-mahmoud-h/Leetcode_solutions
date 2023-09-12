
class Solution {
private:
    int getScore( map<int,int,greater<int>>&freq){
        if(freq.size()==0){
            return 0;
        }
        int key = freq.begin()->first;
        int val = freq.begin()->second;
        int del = val - 1;
        if(val>1 && key>1){
            freq[key-1] += val-1;
        }
        freq.erase(key);
        return del + getScore(freq);
    }
public:
    int minDeletions(string s) {
        unordered_map<char,int>cnt;
        for(char c: s){
            cnt[c]++;
        }
        map<int,int,greater<int>>freq;
        for (const auto &item: cnt){
            freq[item.second]++;
        }
        // for (const auto &item: freq){
        //     cout<<item.first<<"  "<<item.second<<"\n";
        // }
        return getScore(freq);
    }
};