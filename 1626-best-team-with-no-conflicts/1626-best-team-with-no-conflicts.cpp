class Solution {
private:
    vector<vector<int>>memo;
    typedef pair<int,int> Pr;
    static bool cmp(Pr& p1,Pr& p2){
        if(p1.first==p2.first)
            return p1.second > p2.second;
        return p1.first > p2.first;
    }
    int helper( vector<pair<int,int>> &ar,int start,int prev){
        int n = ar.size();
        if(start>=n){
            return 0;
        }
        
        if(memo[start+1][prev+1]!=-1){
            return memo[start+1][prev+1];
        }
        int pick = 0;
        int leave = 0;
        if(prev>=0&&ar[start].second>ar[prev].second){
           // cout<<start<<" | "<<prev<<"\n";
            pick = 0;
        }else{
            pick = ar[start].second + helper(ar,start+1,start);
        }
        leave = helper(ar,start+1,prev);
        
        memo[start+1][prev+1] = max(pick,leave);

        return max(pick,leave);
    }
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {

        int n = ages.size();
        
        memo = vector<vector<int>>(1+n,vector<int>(1+n,-1));
        
        vector<pair<int,int>> age_score(n);

        for (int i = 0; i < n; ++i) {
            age_score[i] = {ages[i],scores[i]};
        }

        sort(age_score.begin(),age_score.end(),cmp);
        int j=0;
        // for(auto i:age_score){
        //     cout<<j++<<"- "<<i.first<<" , "<<i.second<<"\n";
        // }
        return helper(age_score,0,-1);
    }
};