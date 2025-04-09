class Solution {
private:
    int get_second_largest(string &s, int first_largest){
        int ans = -1;
        for (const auto &ch: s){
            if(isdigit(ch)){
                int digit = ch-'0';
                if(digit==first_largest){
                    continue;
                }
                ans = max(ans, digit);
            }
        }
        return ans;
}
public:
    int secondHighest(string s) {
        int get_largest = get_second_largest(s, 10);
        if(get_largest == -1)
            return -1;
        int get_second_largest_num = get_second_largest(s, get_largest);
        
        return get_second_largest_num;
    }
};