class Solution {
private:
    typedef long long ll; 
   
  vector<ll>memo;
    ll helper(vector<vector<int>>& ar,int idx){  //[1,2,3,4]
        int n = ar.size();
        if(idx>=n)
            return 0;
        if(memo[idx]!=-1){
            return memo[idx];
        }

        ll pick = ar[idx][0] + helper(ar,idx+ar[idx][1]+1);
        ll leave = helper(ar,idx+1);

        return memo[idx] = max(pick,leave);
    }
public:
    ll mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        memo = vector<ll>(n,-1);
        return helper(questions,0);
    }
};
//5 000 000 000