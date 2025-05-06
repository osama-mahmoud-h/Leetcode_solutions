class Solution {
    private:
    int MOD = 1e9+7;
    private :
    int helper(int firstRow, int secondRow, vector<vector<int>> &dp)
    {
        if(firstRow == 0 && secondRow == 0) // reaches the first cell 
            return 1;
        
        if(firstRow < 0 || secondRow < 0) // out of the borders 
            return 0;
        
        if(dp[firstRow][secondRow] != -1) // memoization
            return dp[firstRow][secondRow];
        
        int res = 0;
        
        // 4 cases
        // 1) one vertical Domino (1 dot at firstRow, 1 dot at secondRow)
        // 2) one horizontal Domino (either 2 dots at firstRow or 2 dots at secondRow, we have to consider both)
        // 3) Tromino (2 dots at firstRow & 1 dot at secondRow)
        // 4) Inverted Tromino (1 dot at firstRow & 2 dots at secondRow)
        if(firstRow == secondRow)
        {
                  // one vertical Domino
            res = ((((helper(firstRow-1, secondRow-1, dp) % MOD + 
                    
                    // one horizontal Domino (consider both first and second row)
                    helper(firstRow-2, secondRow-2, dp) % MOD) % MOD + 
                   
                    // Tromino
                    helper(firstRow-2, secondRow-1, dp) % MOD) % MOD +
                
                    // Inverted Tromino
                    helper(firstRow-1, secondRow-2, dp) % MOD) % MOD );
        }
        
        // If dots in firstRow > secondRow, then 2 cases (we have to reduce the dots)
        // 1) at firstRow, we have to add horizontal Domino (so it will reduce 2 dots)
        // 2) Add Tromino (so, it will reduce 2 dots at firstRow, 1 dots at secondRow)
        else if(firstRow > secondRow)
        {
                  // Add horizontal domino at firstRow
            res = ((helper(firstRow-2, secondRow, dp) % MOD + 
                   
                    // Add Tromino
                    helper(firstRow-2, secondRow-1, dp) % MOD) % MOD);
        }
        
        // If dots in firstRow < secondRow, then 2 cases
        // 1) Add Inverted Tromino (so, it will reduce 1 dot at firstRow, 2 dots at secondRow)
        // 2) At secondRow, we have to add horizontal Domino (so it will reduce 2 dots)
        else if(firstRow < secondRow)
        {
                  // Add horizontal domino at secondRow
            res = ((helper(firstRow, secondRow-2, dp) % MOD + 
                   
                    // Add Inverted Tromino
                    helper(firstRow-1, secondRow-2, dp) % MOD) % MOD);
        }
        
        return dp[firstRow][secondRow] = res;
    }
    
public:
    int numTilings(int n) {
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        // first row, second row (because, we have 2xN board, so 2 rows, N column)
        return helper(n, n, dp);
    }
};