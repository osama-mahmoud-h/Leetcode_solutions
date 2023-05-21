
class Solution {
private:
    queue<pair<int,int>>q;
    vector<vector<int>>dir= {{0,1},{1,0},{-1,0},{0,-1}};
    void dfs(vector<vector<int>>& ar,int i,int j){
        int n = ar.size(),m=ar[0].size();
        
        if(i<0 || i>=n || j<0 || j>=m || ar[i][j]==0 || ar[i][j]==2){
            return ;
        }

        ar[i][j]=2;
        q.push({i,j});

        dfs(ar,i,j+1);
        dfs(ar,i+1,j);
        dfs(ar,i,j-1);
        dfs(ar,i-1,j);
    }

    int bfs(vector<vector<int>>& ar){
        int ans =-1;
        int n = ar.size(),m=ar[0].size();

        for ( ; q.size(); ans++){
            int sz = q.size();
            for (int i = 0; i < sz; ++i) {
                pair<int,int>cur = q.front();
                q.pop();
                
                 if (ar[cur.first][cur.second]==1){
                      return ans;
                  }
                
                for (const auto &j: dir){
                 
                  if((cur.first+j[0])<0  ||
                     (cur.first+j[0])>=n || 
                     (cur.second+j[1])<0 || 
                     (cur.second+j[1])>=m){
                      continue;
                  }
                else if(ar[cur.first+j[0]][cur.second+j[1]]==0){
                      q.push({cur.first+j[0],cur.second+j[1]});
                      ar[cur.first+j[0]][cur.second+j[1]]=3;
                  }else if(ar[cur.first+j[0]][cur.second+j[1]]==1){
                    return ++ans;
                }
                 
                }
               // cout<<cur.first<<" , "<<cur.second<<"->"<<ar[cur.first][cur.second]<<" || ";

            }
            //cout<<"\n";
        }
        return ans;
    }
public:
    int shortestBridge(vector<vector<int>>& ar) {
        int n = ar.size(),m=ar[0].size();

        int i=0,j=0;
       for (i = 0; i < n; ++i){
           bool flag = 0;
            for (j = 0; j < m; ++j){
                if(ar[i][j]){
                    dfs(ar,i,j);
                    flag = 1;
                    break ;
                }
            }
           if (flag)break;
       }
        
          

        return bfs(ar);
    }
};

/**
[
[0,1,0],
[0,0,0],
[0,0,1]
]

[
[0,1],
[1,0]]
**/