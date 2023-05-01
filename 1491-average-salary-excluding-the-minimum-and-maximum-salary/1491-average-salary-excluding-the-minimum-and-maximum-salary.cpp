
class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size()-2;
        int mx = *max_element(salary.begin(),salary.end());
        mx+=*min_element(salary.begin(),salary.end());

        int sum = accumulate(salary.begin(),salary.end(),0) - (mx);
        return sum*1.0/n;
    }
};
