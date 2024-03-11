
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>char_wight;
        int i = 1;
        for (const auto &item: order){
            char_wight[item] = i++ ;
        }
        for (const auto &item: s){
            if(char_wight.find(item)==char_wight.end()){
                char_wight[item] = i++;
            }
        }


        sort(s.begin(),s.end(),[&](char c1, char c2){
            return char_wight[c1] < char_wight[c2];
        });

        return s;
    }
};