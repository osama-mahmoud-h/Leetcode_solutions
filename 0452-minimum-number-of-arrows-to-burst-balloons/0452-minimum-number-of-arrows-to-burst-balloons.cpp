
class Solution {
private:
    static bool cmp(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0] < b[0];
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int n = points.size();
        int ans = 1;
        int end = points[0][1];
        for (int i = 1; i < n; ++i) {
            if(points[i][0]>end){
                ans++;
                end = points[i][1];
            } else{
                end = min(end,points[i][1]);
            }
        }
        return ans;
    }
};