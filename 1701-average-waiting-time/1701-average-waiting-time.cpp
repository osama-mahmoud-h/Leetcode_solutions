class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int cur_time = customers[0][0], n = customers.size();
        long  total_wait = 0;
        
        for (const auto &item: customers){
            int arrive_time = item[0], order_time = item[1];
            
            cur_time = max(cur_time, arrive_time) + order_time;
            
            total_wait += cur_time - arrive_time ;
          
        }

        return (total_wait * 1.0) / n;
    }
};
