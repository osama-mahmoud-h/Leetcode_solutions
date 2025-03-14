class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 0, high = 1e7;
        while(low < high){
            int mid = (low + high + 1)/2;
            int sum = 0;
            for (const auto &candy: candies){
                sum += candy/mid;
            }
            if(sum < k){
                high = mid - 1;
            }else{
                low = mid;
            }
        }

        return low;
    }
};
