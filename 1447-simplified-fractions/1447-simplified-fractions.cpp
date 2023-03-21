class Solution {
private:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
public:
    vector<string> simplifiedFractions(int n) {
        unordered_set<string>fractions;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                int gcd_ = gcd(j,i);

                string fraction = to_string(j/gcd_)+"/"+to_string(i/gcd_);
                fractions.insert(fraction);
            }
        }

        vector<string>ans(fractions.size());
        int i=0;
        for (const auto &item: fractions){
            ans[i++] = item;
        }
        return ans;
    }
};