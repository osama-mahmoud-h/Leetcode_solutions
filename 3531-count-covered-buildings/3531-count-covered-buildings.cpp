class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int ans = 0;
        unordered_map<int, set<int>> y_axis, x_axis;
        for (const auto &building: buildings){
            int x = building[0], y = building[1];
            x_axis[x].insert(y);
            y_axis[y].insert(x);
        }

        for (const auto &building: buildings){
            int x = building[0], y = building[1];
            auto along_x_point = x_axis[x].find(y);
            auto along_y_point = y_axis[y].find(x);
            bool is_between_along_x = (along_x_point != x_axis[x].begin()) and ( next(along_x_point) != x_axis[x].end());
            bool is_between_along_y = ( along_y_point != y_axis[y].begin()) and (next(along_y_point) != y_axis[y].end() );

            if(is_between_along_x and is_between_along_y)
                ans++;
        }
        return ans;
    }
};