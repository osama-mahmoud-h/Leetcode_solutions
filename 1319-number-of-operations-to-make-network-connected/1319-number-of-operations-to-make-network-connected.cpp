
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
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
       UnionFind unionFind(n);
       unordered_set<int>parents;

        for (const auto &item: connections){
            unionFind.Union(item[0], item[1]);
        }

        int cnt = 0;
        

        return unionFind.getNumSets() - 1;
    }
};