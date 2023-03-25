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
    
};


/**=================================================================================
 ==================================  SOLUTION  =====================================
===================================================================================*/
class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        UnionFind uf(n);
        for (const auto &item: edges){
            uf.Union(item[0],item[1]);
            //cout<<item[0]<<" , "<<item[1]<<"\n";
        }

        unordered_map<int,int>connectedComponents;
        vector<int>parents = uf.getParent();
        int low = 0 ;
        for (int i = 0; i < n; ++i) {
            int parent = uf.find(parents[i]);
            connectedComponents[parent]++;
        }

      
long long ans = 0;
        vector<int>nums;
        for (const auto &item: connectedComponents){
            nums.push_back(item.second);
        }
        vector<int>sum = nums;
        
        for (int i = 1; i < nums.size(); ++i) {
            sum[i]+=sum[i-1];
        }
        for (int i = 0; i < nums.size(); ++i) {
            ans += (long long)(sum[sum.size()-1]-sum[i])*nums[i];
        }
        
        return ans;
        
    }


};

/*
2+4+8
1 2 4 
8
4
2
*/