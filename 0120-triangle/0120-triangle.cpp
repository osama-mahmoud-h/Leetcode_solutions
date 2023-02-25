class Solution {
private:
    vector<vector<int>> memo;
    int recur(int idx, int level,vector<vector<int>>& triangle){
        int n = triangle.size();
        if(level>=n){
            return 0;
        }
        if(memo[level][idx]!=-1){
            return memo[level][idx];
        }
        int left = triangle[level][idx] + recur(idx,level+1,triangle);
        int right = triangle[level][idx+1] + recur(idx+1,level+1,triangle);
        
        memo[level][idx] = min(left,right);
        return min(left,right);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //create memoized array 
        int n = triangle.size();
       memo = vector<vector<int>>(n);

        for (int i = 0; i < n; ++i) {
            vector<int>level(i+1,-1);
            memo[i]=level;
        }
        return triangle[0][0]+ recur(0,1,triangle);
    }
};
