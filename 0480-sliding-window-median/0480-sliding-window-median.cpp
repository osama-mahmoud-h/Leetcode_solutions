class MedianWindow {
    multiset<int> low, high;

    void rebalance() {
        if (low.size() > high.size() + 1) {
            high.insert(*prev(low.end()));
            low.erase(prev(low.end()));
        } else if (low.size() < high.size()) {
            low.insert(*high.begin());
            high.erase(high.begin());
        }
    }

public:
    void insert(int x) {
        if (low.empty() || x <= *prev(low.end()))
            low.insert(x);
        else
            high.insert(x);
        rebalance();
    }

    void erase(int x) {
        if (low.find(x) != low.end())
            low.erase(low.find(x));
        else
            high.erase(high.find(x));
        rebalance();
    }
    
   double middle() {
        if (low.size() == high.size())
            return (*prev(low.end()) *1.0 + *high.begin() *1.0) /2.0;
        return (*prev(low.end())* 1.0 +  *prev(low.end()) *1.0) / 2.0;
    }
};

class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        MedianWindow mw;
        for (int i = 0; i < k; ++i){
            mw.insert(nums[i]);
        }
        vector<double> ans;
        ans.push_back(mw.middle());

        for (int i = k; i < n; ++i){
            mw.erase(nums[i-k]);
            mw.insert(nums[i]);
            ans.push_back(mw.middle());
        }
        return ans;
    }
};