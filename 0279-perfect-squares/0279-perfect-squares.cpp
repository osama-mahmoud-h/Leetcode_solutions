class Solution {
private:
    vector<vector<int>>memo;
    int OO = 1e6;
    
    int recur(int sum,int idx,vector<int>&ar){
        int n = ar.size(); 
        if(idx>=n){
            if(sum>0)return OO;
           // cout<<sum<<"\n";
            return 0;
        }
        if(sum<0){
            return OO;
        }
        
        
        if(memo[sum][idx]!=-1){
            return memo[sum][idx];
        }
        
        
        int leave = recur(sum,idx+1,ar);
        int pick = 1 + recur(sum-ar[idx],idx,ar);
        
       // cout<<"idx: "<<ar[idx]<<" , sum:"<<sum<<" , pick: "<<pick<<" , leave "<<leave<<"\n";
            
        memo[sum][idx] = min(pick,leave);
        
        return min(pick,leave);
    }
public:
    int numSquares(int n) {
        
        vector<int>squares;
        int mul=1;
        while(mul*mul<=n){
            squares.push_back(mul*mul);
            mul++;
        }
       
        reverse(squares.begin(),squares.end());
                memo = vector<vector<int>>(n+1,vector<int>(squares.size()+1,-1));

        
        
        return recur(n,0,squares);
    }
};