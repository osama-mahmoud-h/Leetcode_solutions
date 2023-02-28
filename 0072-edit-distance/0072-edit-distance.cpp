class Solution {
private:
vector<vector<int>>memo;
int OO = 1e6;
int helper(string w1, string w2,int i,int j){
    int n = w1.length() , m = w2.length(); 

    if(i>=n){
        return m-j;
    }
    if(j>=m){
        return n-i;
    }
    
    

    int delete_ = OO , insert_ = OO ,replace_ = OO;

    if(memo[i][j]!=-1){
        return memo[i][j];
    }
    
    if(w1[i]==w2[j]){
        return helper(w1,w2,i+1,j+1);
    }else{
        
    
    //insertcase
    insert_ = 1 + helper(w1, w2, i, j+1);
    

    //replace case
    replace_ = 1 + helper(w1, w2, i+1, j+1);

    //delete case
      
    delete_ = 1 + helper(w1, w2, i+1, j);
        
    }
    
memo[i][j] =min (delete_, min (insert_, replace_));
return min (delete_, min (insert_, replace_));

}
public:
    int minDistance(string w1, string w2) {
        int n =  w1.length();
        int m = w2.length();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(w1,w2,0,0);
    }
};