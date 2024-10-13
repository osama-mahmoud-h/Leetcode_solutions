class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int,int>>line(intervals.size()*2,{-1,-1});
        int sum = 0;
        int mx = 0;
        int i = 0;
        for (const auto &item: intervals){
            line[i++] = {item[0], 1};
            line[i++] = {item[1]+1, -1};
        }
        sort(line.begin(),line.end());
        for (const auto &item: line){
            sum+=item.second;
            mx = max(mx,sum);
        }
        return mx;
    }
};
