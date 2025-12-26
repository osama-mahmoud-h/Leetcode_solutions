class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int open_all = std::accumulate(customers.begin(), customers.end(), 0,
                                  [](int acc, char c) {
                                      return acc + (c == 'Y') - (c == 'N');
                                  });
        int max_gain = INT_MIN;
        max_gain = max(max_gain, open_all);
        
        int close_sum = open_all, ans = n;
        for (int i = n-1; i >=0; --i) {
           bool cus_come = customers[i] == 'Y';
           if(cus_come){
             close_sum --;
           }else{
               close_sum ++;
           }
           if(close_sum >= max_gain){
               ans = i;
               max_gain = close_sum;
           }
        }
        return ans;
    }
};