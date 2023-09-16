
struct Edge{
    int src;
    int dest;
    int weight;
    Edge(int src, int dest, int weight) : src(src), dest(dest), weight(weight) {}
};
struct CompareEdge {
    bool operator()(const Edge& a, const Edge& b) {
        return a.weight > b.weight; // To push in ascending order of weight
    }
};


class UnionF{
    vector<int>parent;
public:
    UnionF(int n) {
        parent = vector<int>(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x){
        return parent[x] = (parent[x] == x ? x : find(parent[x]));
    }

    void Union(int u, int v){
        int ru = find(u);
        int rv = find(v);
        if(ru == rv) return ;
        parent[rv] = ru;
    }
};


class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        priority_queue<Edge, vector<Edge>, CompareEdge> pq; // Using custom comparison
        int ans = 1e9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if((j+1)<m){
                     int curNode = i*m+j;
                int rightNode = i*m+(j+1) , diff1 = abs(heights[i][j]-heights[i][j+1]);
                    pq.push(Edge(curNode,rightNode,diff1));
               // cout<<curNode<<" , "<<rightNode<<"\n";

                }
                if((i+1)<n){
                int curNode = i*m+j;
                int downNode = (i+1)*m+j , diff2 = abs(heights[i][j]-heights[i+1][j]);
                //cout<<curNode<<" , "<<downNode<<"\n";
                pq.push(Edge(curNode,downNode,diff2));
                }

            }
        }

        UnionF unionF(n*m);
        while (pq.size()){
            Edge top = pq.top(); pq.pop();
            ans = top.weight;
        
                unionF.Union(top.src,top.dest);
                        if(unionF.find(0)== unionF.find((n*m)-1)){
                                            return top.weight;

                        }
        }

        return ans==1e9 ? 0 : ans;
    }
};