
class Solution {
private:
    vector<int>memo;
    bool helper(vector<int>&ar,int idx){
        int n = ar.size();
        if(idx>=n){
            return 1;
        }
        if((n-idx)==1){
            return 0;
        }else if ((n-idx)==2){
            return ar[idx]==ar[idx+1];
        }
        
        if(memo[idx]!=-1){
            return memo[idx];
        }
        
        if(ar[idx]==ar[idx+1] && ar[idx]==ar[idx+2]){//we have two ways
            return memo[idx] = helper(ar,idx+2) or helper(ar,idx+3);
        } else if ((ar[idx]+1 == ar[idx+1]) && (ar[idx+1]+1 == ar[idx+2])){
            return memo[idx] = (1 and helper(ar,idx+3));
        }else if(ar[idx] == ar[idx+1]){
            return memo[idx] = (1 and helper(ar, idx+2));
        }
        return 0;
    }
public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        memo = vector<int>(n,-1);
        return helper(nums,0);
    }
};