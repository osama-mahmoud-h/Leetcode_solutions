class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    int n =  grid.size();
    if(grid[0][0]!=0 || grid[n-1][n-1]!=0){
        return -1;
    }

    vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
    int cnt = 0;
    queue<pair<int,int>>q;
    q.push({0,0});
    grid[0][0]=1;    
    while (q.size()){
        cnt++;
        int sz = q.size();
        for (int i = 0; i <sz ; ++i) {
            pair<int,int> front;
            front = q.front();
            q.pop();
            if(front.first == n-1 &&front.second==n-1){
                return cnt;
            }
            
            
            for(auto dir:dirs){
                int i = dir[0]+ front.first;
                int j = dir[1]+front.second;
                if(i>=0&&j>=0&&i<n&&j<n&&grid[i][j]==0){
                    q.push({i,j});
                    grid[i][j]=1;
                }
            }
        }
        
        if(q.empty())return -1;
    }
    return cnt;    }
};