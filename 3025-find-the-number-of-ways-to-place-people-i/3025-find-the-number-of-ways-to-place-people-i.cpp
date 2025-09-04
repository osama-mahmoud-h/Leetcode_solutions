void print2DVector(const vector<vector<int>>& v) {
    // Print the 2D vector with formatted output
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << setw(4) << v[i][j];
        }
        cout << endl;
    }
}

class Solution {
    bool is_points_in_rectangle(vector<vector<int>>& points, vector<int>&a, vector<int>&b ,int low, int high){
        for (int i = low+1; i < high; ++i) {
           vector<int>& cur = points[i];
            if (cur[0] >= b[0] && cur[0] <= a[0] &&
                cur[1] <= b[1] && cur[1] >= a[1]) {
                return true; // found a point inside rectangle
            }
        }
        return false;
    }
    bool is_left_upper(vector<int>&a, vector<int>&b){
         return a[1] <= b[1];
    }
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),[&](vector<int>&a, vector<int>&b){
            if(a[0]==b[0])
                return a[1]>b[1];
            return a[0] < b[0];
        });
        int n = points.size();
        int ans = 0;
        for (int i = n-1; i >=0 ; --i) {
            for (int j = i-1; j >=0 ; --j) {
                if(!is_left_upper(points[i], points[j]))
                    continue;
                if(is_points_in_rectangle(points, points[i], points[j], j, i))
                    continue;
                ans++;
            }
        }

        return ans;
    }
};