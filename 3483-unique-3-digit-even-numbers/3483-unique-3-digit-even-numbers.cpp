class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> evens ;
        for (int el : digits) {
            if (el % 2 == 0) evens.insert(el);
        }
        int ans = 0;
        unordered_set<int> uniques;
        int n = digits.size();
        
        for (int i = 0; i < n; ++i) {
            if(digits[i]%2 == 1)
                continue;
            for (int j = 0; j < n; ++j) {
                if(j==i)
                    continue;
                for (int k = 0; k < n; ++k) {
                    if(digits[k] == 0 || (i==j || j==k || i==k))
                        continue;
                    uniques.insert(digits[k]*100 + digits[j]*10 + digits[i]);
                }
            }
        }

        return uniques.size();
    }
};