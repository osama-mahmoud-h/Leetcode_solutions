class Solution {
private:
    bool is_symmetric(int n){
        string num_str = to_string(n);
        if(num_str.length()%2 != 0)
            return 0;
        int i=0, j= num_str.length()-1;
        int l = 0, r = 0;
        
        while (i < j){
            l += num_str[i++] ;
            r += num_str[j--];
        }
        return l==r;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for (int i = low; i <= high ; ++i) {
            ans += is_symmetric(i) ? 1 : 0;
        }
        return ans;
    }
};