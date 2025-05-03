class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>years_line(102,0);
        int ans = 0;
        //unordered_set<int>point_years;

        for (const auto &item: logs){
            int start = item[0], end = item[1];

           // point_years.insert(start);
         //   point_years.insert(end);

            years_line[start-1949]++;
            years_line[end-1949]--;

        }

        int max_freq = 0;
        for (int i = 1; i < 102; ++i) {
            years_line[i] += years_line[i-1];
            //cout<<years_line[i]<<" , year: "<<i+1950<<"\n"; 
            if(years_line[i] > max_freq){
                max_freq = years_line[i];
                ans = i+1949;
            }
        }

        return ans;
    }
};