class Solution {
private:
    vector<vector<int>>memo;
    bool helper(vector<int>&A, int idx, int sum ,int rem){
        if(idx >= A.size()){
            if(sum == rem)
                return 1;
            return 0;
        }
        if(sum == rem)
            return memo[idx][sum] =  1;

        if(memo[idx][sum]!=-1){
            return memo[idx][sum];
        }
        bool pick = helper(A,idx+1, sum + A[idx], rem - A[idx]);
        bool leave = helper(A,idx+1, sum , rem );

        return memo[idx][sum] = (pick or leave);
    }
public:
    bool canPartition(vector<int>& A) {
        sort(A.begin(), A.end());
        int sum = accumulate(A.begin(), A.end(),0);
        memo = vector<vector<int>>(A.size(),vector<int>(sum+1,-1));
        return helper(A,1,0,sum);
    }
};