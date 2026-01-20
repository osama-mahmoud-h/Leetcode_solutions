class Solution {
public:
int clearLeftmostBitOfTrailingOnes(int x) {
    if (x == 0) return 0;

    // number of trailing ones
    int k = __builtin_ctz(~x);

    // clear the highest bit of that trailing-ones block
    return x & ~(1 << (k - 1));
}

    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans ;
        for (auto const i: nums){
            int bit_count = __builtin_popcount(i);
            int lowest = i & (-i);
            if(bit_count == 1)
                ans.push_back(-1);
            else
                ans.push_back(clearLeftmostBitOfTrailingOnes(i));
        } // 23 -> 1 0111
          // 24 -> 1 1000
          //23+24->1 0000 
          // 19 -> 1 0011
          /*
          31 -> 1 1111
          15 -> 0 1111
          */ 

        return ans;
    }
};
/**
ans | (ans + 1) = num 
*/