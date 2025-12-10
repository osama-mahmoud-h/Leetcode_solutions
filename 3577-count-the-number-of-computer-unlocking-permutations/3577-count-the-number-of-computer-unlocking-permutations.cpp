class Solution {
private:
    const int mod = 1e9 + 7;
    bool is_uinque_min(int num, vector<int>& ar){
        for (int i = 1; i < ar.size(); ++i) {
            if(ar[i] <= num)
                return 0;
        }
        return 1;
    }
    int factorial(int n){
        long long int ans = 1;
        for (int i = 1; i <= n; ++i) {
            ans = (1LL * ans * i) % mod;
        }
        return ans % mod;
    }
public:
    int countPermutations(vector<int>& complexity) {
        if(!is_uinque_min(complexity[0], complexity))
            return 0;

        return factorial(complexity.size() - 1 );
    }
};