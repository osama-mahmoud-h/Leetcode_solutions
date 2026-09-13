class Solution {
private:
    int overlap(vector<vector<int>>& img1, int rowOffset, int colOffset,
                vector<vector<int>>& img2) {
        int n = img1.size();
        int count = 0;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {

                int originalRow = row - rowOffset;
                int originalCol = col - colOffset;

                if (originalRow < 0 || originalRow >= n || originalCol < 0 ||
                    originalCol >= n) {
                    continue;
                }

                count += img1[originalRow][originalCol] & img2[row][col];
            }
        }

        return count;
    }

public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int ans = 0;

        for (int rowOffset = -(n - 1); rowOffset <= n - 1; rowOffset++) {

            for (int colOffset = -(n - 1); colOffset <= n - 1; colOffset++) {

                ans = max(ans, overlap(img1, rowOffset, colOffset, img2));
            }
        }

        return ans;
    }
};