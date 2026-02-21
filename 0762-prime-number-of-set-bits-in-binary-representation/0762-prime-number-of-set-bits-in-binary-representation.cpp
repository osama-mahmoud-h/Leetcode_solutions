class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17 ,19};
        int ans = 0;
        for(int i = left; i<=right; i++){
            if(primes.count(__builtin_popcount(i)))
                ans++;
        }
        return ans;
    }
};