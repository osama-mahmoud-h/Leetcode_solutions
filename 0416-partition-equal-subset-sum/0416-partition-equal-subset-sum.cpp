class Solution {
private:
    bool helper(vector<int>&A, int idx, int sum ,int rem){
        if(idx >= A.size()){
            return false;
        }
        sum += A[idx];
        rem -= A[idx];
        if(sum==rem)
            return true;
        bool pick = helper(A,idx+1, sum, rem);
        bool leave = helper(A,idx+1, sum -  A[idx], rem +  A[idx]);
        return pick or leave;
    }
public:
    bool canPartition(vector<int>& A) {
        sort(A.begin(), A.end());
        int sum = accumulate(A.begin(), A.end(),0);
        return helper(A,1,0,sum);
    }
};