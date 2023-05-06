class Solution {
private:
    vector<vector<vector<int>>>memo;

    int helper(vector<pair<int,int>>&ar , int idx,int n,int m){
        int len = ar.size();
        if(idx>=len ){
            return 0;
        }

        if(memo[idx][n][m]!=-1){
            return memo[idx][n][m];
        }

        int pick = 0;

        int difx = n-ar[idx].first , dify = m-ar[idx].second;

        if( difx>=0 && dify>=0)
            pick = 1 + helper(ar,idx+1,difx,dify);

        int leave = helper(ar,idx+1,n,m);

        return memo[idx][n][m] = max(pick,leave);
    }
    pair<int,int> count_zeros_ones(string &s){
        int z = 0 , o = 0;
        for (const auto &item: s){
            if (item-'0')o++;
            else
                z++;
        }
        return  {o,z};
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int len = strs.size();

        vector<pair<int,int>>count(len);

        for (int i = 0; i < len; ++i) {
            count[i] = count_zeros_ones(strs[i]);
        }
        
        memo = vector<vector<vector<int>>>(len,vector<vector<int>>(n+1,vector<int>(m+1,-1)));

        return helper(count,0,n,m);
    }
};
