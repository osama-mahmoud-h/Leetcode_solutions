class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>>pq;
        int ans = -1;

        for (const auto &i: nums){
            pq.insert(i);
            if(pq.size()>3){
                pq.erase(--pq.end());
            }
        }

        if(pq.size()<3)
            return *pq.begin();

        return *(--pq.end());
    }
};