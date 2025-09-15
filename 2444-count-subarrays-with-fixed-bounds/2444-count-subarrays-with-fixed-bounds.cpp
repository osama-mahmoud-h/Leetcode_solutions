template <typename T>
void print1DArray(const std::vector<T>& v,
                  std::ostream& os = std::cout,
                  const char* sepa = ", ")
{
    if (v.empty()) return;
    os << v.front();
    for (std::size_t i = 1; i < v.size(); ++i) {
        os << sepa << v[i];
    }
}

class Solution {
private:
    bool between(int num, int a, int b){return num>=a and num<=b;}
    vector<vector<int>> divide_to_subs(vector<int>& nums, int minK, int maxK){
        vector<vector<int>> ans;
        vector<int> temp;
        bool min_exists = 0, max_exists = 0;
        for (const auto &item: nums){
            if(!between(item,minK,maxK)){
                if(min_exists and max_exists){
                    ans.push_back(temp);
                }
                min_exists = max_exists = 0;
                temp.clear();
                continue;
            }
            min_exists = (min_exists || item == minK);
            max_exists = (max_exists || item == maxK);
            temp.push_back(item);
        }
        // Check last segment
        if (min_exists && max_exists) {
            ans.push_back(temp);
        }
        return ans;
    }
    long long solve(vector<int> nums, int minK, int maxK){
         long long ans = 0;
    int n = nums.size();

    int lastMin = -1, lastMax = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == minK) lastMin = i;
        if (nums[i] == maxK) lastMax = i;

        if (lastMin != -1 && lastMax != -1) {
            ans += min(lastMin, lastMax) + 1;
        }
    }

    return ans;
    }
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        vector<vector<int>>subs = this->divide_to_subs(nums,  minK, maxK);
        long long ans = 0;
        for (const auto &item: subs){
            ans += solve(item,  minK, maxK);
        }
        return ans;
    }
};