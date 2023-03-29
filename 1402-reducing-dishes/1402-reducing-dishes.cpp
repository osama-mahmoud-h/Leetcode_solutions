class Solution {
    vector<vector<int>>memo;
private:
    int helper(int idx ,int coff,vector<int>&ar){
        int n = ar.size();
        if(idx>=n){return 0;}
        if(memo[idx][coff]!=-1){
            return memo[idx][coff];
        }
        int pick = coff * ar[idx]+ helper(idx+1,coff+1,ar);
        int leave = helper(idx+1,coff,ar);
        
        memo[idx][coff] = max(pick,leave);
        return max(pick,leave);
    }
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        memo = vector<vector<int>>(n,vector<int>(n+1,-1));
        sort(satisfaction.begin(),satisfaction.end());
        return helper(0,1,satisfaction);
    }
};
