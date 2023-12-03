class Solution {
private:
    vector<int> substractPoints(vector<int>&p1,vector<int>&p2) {
        return {p1[0] - p2[0], p1[1] - p2[1]};
    }

public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for (int i = 0; i < n-1; ++i) {
            vector<int>pDiff = substractPoints(points[i],points[i+1]);
            ans += max(abs(pDiff[0]),abs(pDiff[1]));
        }
        return ans;
    }
};