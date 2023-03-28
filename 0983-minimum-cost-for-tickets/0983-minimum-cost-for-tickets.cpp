
class Solution {
private:
    vector<int>memo;
    int helper(int idx ,vector<int>&days,vector<int>&costs){
        int n = days.size();
        if(idx >= n ){return 0;}
        
        if(memo[idx]!=-1){return memo[idx];}
        
        int i=idx;
        while (i<n && days[i] < (days[idx]+1)){i++;}
        int first = costs[0]+helper(i,days,costs);

        i=idx;
        while (i<n && days[i] < (days[idx]+7)){i++;}
        int second = costs[1]+helper(i,days,costs);

        i=idx;
        while (i<n && days[i] < (days[idx]+30)){i++;}
        int third = costs[2]+helper(i,days,costs);

        memo[idx] = min({first,second,third});
        return min({first,second,third});
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memo = vector<int>(days.size()+1,-1);
        return helper(0,days,costs);
    }
};
