
class UnionFind{
public:
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
    vector<int> getGroup(int x) {
        int root = find(x);
        vector<int> group;
        for (int i = 0; i < parent.size(); i++) {
            if (find(i) == root) {
                group.push_back(i);
            }
        }
        return group;
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

    unordered_map<int, unordered_set<int>> get_groups(){
        unordered_map<int, unordered_set<int>> components;
        for (int i = 0; i < parent.size(); i++) {
            components[find(i)].insert(i);
        }
        return components;
    }

};
class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        UnionFind uf(n);
        unordered_set<string> uni_edges;
        for (const auto &edge: edges){
            uf.Union(edge[0], edge[1]);
            uni_edges.insert(to_string(edge[0]) + "_" + to_string(edge[1]));
            uni_edges.insert(to_string(edge[1]) + "_" + to_string(edge[0]));
        }
        int ans = 0;

        for (const auto &item: uf.get_groups()){
            unordered_set<int> st = item.second;
            bool all_connected = 1;
           // cout<<"\ng1: "<<item.first<<"\n";
            for (const auto &i: st){
                //cout<<i<<" , ";
                for (const auto &j: st){
                    //cout<<" | ("<<i<<","<<j<<") -> "<<(uni_edges.count(to_string(i)+"_"+ to_string(j)) || uni_edges.count(to_string(j)+"_"+ to_string(i)) )<<" | ";
                    if(i!=j && uni_edges.count(to_string(i)+"_"+ to_string(j)) == 0 && uni_edges.count(to_string(j)+"_"+ to_string(i)) == 0){
                        all_connected = 0;
                        break;
                    }
                }
            }
            if(all_connected){
                ans++;
            }
        }

        return ans;
    }
};