class Solution {
private:
    vector<vector<int>> targted_free_blocks = {{2, 3, 4, 5}, {4, 5, 6, 7}, {6, 7, 8, 9}};
    unordered_map<int,unordered_set<int>> allocated;
    int free_slots(int n){
        int cnt = 0;
        vector<int>slots(3,0);

        for (int i = 0; i < 3; ++i) {
            bool all_free = std::all_of(targted_free_blocks[i].begin(), targted_free_blocks[i].end(), [&](int x) {
                return this->allocated[n].find(x) == this->allocated[n].end();
            });
            slots[i] = all_free;
        }
        return  max({slots[0], slots[1], slots[2], slots[0] + slots[2]});
    }
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        for (const auto &seat: reservedSeats){
            this->allocated[seat[0]].insert(seat[1]);
        }
         long long ans = 2LL * (n - allocated.size());
         for (const auto& [row, seats] : this->allocated) {
            ans += free_slots(row);
        }
        return ans;
    }
};