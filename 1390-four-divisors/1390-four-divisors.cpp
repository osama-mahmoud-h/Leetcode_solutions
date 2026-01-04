class Solution {
private:
    pair<int,int>get_div_count_sum(int n){
        int cnt = 2, sum = 1 + n;
        for (int i = 2; i <= sqrt(n); ++i) {
            if(n % i == 0){
                ++cnt, sum += i;
                int div = n / i;
                if(div != i and n % div == 0)
                    ++cnt, sum += div;
            }
        }
        return {cnt, sum};
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (const auto &item: nums){
            auto div_cnt_sum = get_div_count_sum(item);
            //cout<<"item: "<<item<<" , cnt: "<<div_cnt_sum.first<<" , sum: "<<div_cnt_sum.second<<"\n";
            if(div_cnt_sum.first == 4)
                sum += div_cnt_sum.second;
        }
        return sum;
    }
};