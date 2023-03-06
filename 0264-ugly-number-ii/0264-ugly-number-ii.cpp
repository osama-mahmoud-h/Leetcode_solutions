
class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long int>set;
        set.insert(1);
        int cnt = 0;
        for (int i = 1; i <n ; ++i) {
            long long int small = *set.begin();
            set.erase(small);
            set.insert(small*2);
            set.insert(small*3);
            set.insert(small*5);
        }
        
        
        return *set.begin();
    }
};