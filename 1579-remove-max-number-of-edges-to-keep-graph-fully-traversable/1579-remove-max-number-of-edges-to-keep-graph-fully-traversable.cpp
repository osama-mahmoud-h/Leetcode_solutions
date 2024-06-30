class UnionFind{
private:
    vector<int> parent;
    vector<int> rank;
public:
    UnionFind(int n){
        parent = vector<int>(n);
        rank = vector<int>(n, 0);
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
        if(rank[ru] > rank[rv]) {
            parent[rv] = ru;
        } else if(rank[ru] < rank[rv]) {
            parent[ru] = rv;
        } else {
            parent[rv] = ru;
            rank[ru]++;
        }
    }

    const vector<int>& getParent() const {
        return parent;
    }
    int getNumSets() {
        int count = 0;
        for (int i = 0; i < parent.size(); i++) {
            if (parent[i] == i) {
                count++;
            }
        }
        return count;
    }
};



class Solution {
private:
    bool construct_mst(int numVertices, list<vector<int>>&edges, vector<int>&color_store){
        UnionFind uf(numVertices);
        int mst_size = 0;
        for (const auto& edge : edges) {
            int color_type = edge[0], from = edge[1] - 1, to = edge[2] - 1;
           // cout<<"type: "<<color_type<<" , from: "<<from+1<<" ,to: "<<to+1<<"\n";
            if (uf.find(from) != uf.find(to)) {
                uf.Union(from, to);
                color_store[color_type]--;
                mst_size++;
            }
        }
       // cout<<mst_size<<"\n";
        return mst_size == numVertices - 1;
    }
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        vector<int>color_store(4,0);
        list<vector<int>> alice_edges, bob_edges;
        int ans = 0;
        for (const auto &item: edges){
            color_store[item[0]]++;

            int type = item[0];
            if(type==3){
                alice_edges.push_front(item);
                bob_edges.push_front(item);
            }else if(type==2){
                bob_edges.push_back(item);
            }else{
                alice_edges.push_back(item);
            }
        }

        // construct 2 minimum spanning tree.
        int commonColors = color_store[3];

       bool can_mst_1_constructed =  construct_mst(n,alice_edges,color_store);

       color_store[3] = commonColors;
       // cout<<"\n bob \n";
       bool can_mst_2_constructed =  construct_mst(n,bob_edges,color_store);

       if(!can_mst_1_constructed || !can_mst_2_constructed){
           return -1;
       }

        for (const auto &item: color_store){
          //  cout<<"item: "<<item<<"\n";
            ans += item;
        }
        return ans;
    }
};