class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size(), m = queries.size();
        vector<int>ans (m,0);
        vector<vector<int>> queriesWithIndices(m, vector<int>(2));
        
        for (int i = 0; i < m; ++i) {
            queriesWithIndices[i] = {queries[i],i};
        }
        sort(items.begin(),items.end());
        sort(queriesWithIndices.begin(),queriesWithIndices.end());
        
        int itemIndex = 0;
        int maxBeauty = 0;

        for (int i = 0; i < m; i++) {
            int query = queriesWithIndices[i][0];
            int originalIndex = queriesWithIndices[i][1];

            while (itemIndex < n && items[itemIndex][0] <= query) {
                maxBeauty = max(maxBeauty, items[itemIndex][1]);
                itemIndex++;
            }

            ans[originalIndex] = maxBeauty;
        }
        return ans;
    }
};