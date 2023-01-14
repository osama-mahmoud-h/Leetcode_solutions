       
class Solution {
private:
    int find(int x, vector<int>&parent){
        return parent[x] = (parent[x] == x ? x : find(parent[x],parent));
    }
    void Union(int p, int q, vector<int>&parent){
        parent[find(p,parent)] = find(q,parent);
    }
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        int n = s1.size();
        string ans="";
        
        vector<int>parent(26);
        //init parents
        for (int i = 0; i <26 ; ++i) {
            parent[i]=i;

        }

        for (int i = 0; i < n; ++i) {
            int c1 = s1[i]-'a';
            int c2 = s2[i]-'a';
            Union(c1,c2,parent); 
        }
        
        for (auto c:baseStr){
            for (int i = 0; i <26 ; ++i) {
                if(find(i,parent)==find(c-'a',parent)){
                    char ch = i+'a';
                    ans+=ch;
                    break;
                }
            }    
        }
        
        return ans;
    }
};


