
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,list<string>>map;
        int cnt = 0;
        for (const auto &item: words){
            map[item[0]].push_back(item);
        }

        for (const auto &item: s){
            int sz = map[item].size();
            for (int i = 0; i < sz; ++i) {
                string front = map[item].front();
                map[item].pop_front();
                if(front.length()==1){
                    cnt++;
                    continue;
                }
                map[front[1]].push_back(front.substr(1,front.length()-1));
            }
        }

        return cnt;
    }
};