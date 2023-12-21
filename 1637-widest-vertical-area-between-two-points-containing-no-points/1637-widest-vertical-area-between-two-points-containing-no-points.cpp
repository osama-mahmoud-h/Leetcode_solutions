
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){
            return a[0]<b[0];
        });

        for (int i = 0; i < n-1; ++i) {
            int xDiff = points[i+1][0] - points[i][0];
            ans = max(ans,xDiff);
        }
       
        return ans;
    }
};
