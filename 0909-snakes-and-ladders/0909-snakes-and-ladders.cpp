
class Solution {
    int getBoardValue(vector<vector<int>>& board, int num) {
        int n = board.size();
        int r = (num - 1) / n;
        int x = n - 1 - r;
        int y = r % 2 == 0 ? num - 1 - r * n : n + r * n - num;
        return board[x][y];
    }
public:
    int snakesAndLadders(vector<vector<int>>& board) {

        int cnt = 0;
        int n = board.size();
        //map board
        unordered_map<int,pair<int,int>>map;
        int k=n*n;

        for (int i = 0; i <n ; ++i) {
            if(i%2==1){
                for (int j = n-1; j >=0 ; --j) {
                    map[k--]=make_pair(i,j);
                    cout<<"["<<i<<","<<j<<"]"<<" , ";
                }cout<<"\n";
            } else{
                for (int j = 0; j <n ; ++j) {
                    map[k--]=make_pair(i,j);
                     cout<<"["<<i<<","<<j<<"]"<<" , ";
                }cout<<"\n";
            }
            
        }
        

        vector<bool>vis(n*n+1,0);

        queue<int>q;
        q.push(1);

      //  vis[1] = 1;

        for (cnt=0;q.size()!=0;cnt++){
            int sz = q.size();
            for (int i = 0; i < sz; ++i) {
                int cur = q.front(); q.pop();

               // cout<<cur<<"\n";
                if (vis[cur]) continue;

                vis[cur] = 1;

                if(cur == n*n){
                    return cnt;
                }
                
                for (int j = 1; j <=6 &&((j+cur)<=n*n) ; ++j) {
                    int next = cur+j;
                    int val = getBoardValue(board,next);
                   // auto [row,col] = map[next];

                    if(val!=-1){
                        next = val;
                    }
                    if(!vis[next]){
                        q.push(next);
                    }

                }


            }
          //  cnt++;

        }




        return -1;
    }
};
