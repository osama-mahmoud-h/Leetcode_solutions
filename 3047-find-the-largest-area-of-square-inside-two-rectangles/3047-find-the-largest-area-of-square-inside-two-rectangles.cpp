class Solution {
private:
    int intersectionMinLength(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight, int i, int j) {
        // Rectangle i
        int x1 = bottomLeft[i][0];
        int y1 = bottomLeft[i][1];
        int x2 = topRight[i][0];
        int y2 = topRight[i][1];

        // Rectangle j
        int x3 = bottomLeft[j][0];
        int y3 = bottomLeft[j][1];
        int x4 = topRight[j][0];
        int y4 = topRight[j][1];

        // Intersection boundaries
        int left   = max(x1, x3);
        int right  = min(x2, x4);
        int bottom = max(y1, y3);
        int top    = min(y2, y4);

        // No intersection
        if (right <= left || top <= bottom) {
            return 0;
        }

        int length = right - left;
        int width  = top - bottom;

        return min(length, width);
    }

public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n = bottomLeft.size();
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i == j)
                    continue;
                int sqr_edge = intersectionMinLength(bottomLeft, topRight, i, j);
                ans = max(ans, 1ll * sqr_edge * sqr_edge);
            }
        }

        return ans;
    }
};