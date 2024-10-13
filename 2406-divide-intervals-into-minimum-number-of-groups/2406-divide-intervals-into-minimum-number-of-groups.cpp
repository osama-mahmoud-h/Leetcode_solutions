class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int,int>>line;
        int sum = 0;
        int mx = 0;
        for (const auto &item: intervals){
            line.push_back({item[0],1});
            line.push_back({item[1]+1, -1});
        }
        sort(line.begin(),line.end());
        for (const auto &item: line){
            sum+=item.second;
            mx = max(mx,sum);
        }
        return mx;
    }
};
