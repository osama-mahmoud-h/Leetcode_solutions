class Solution {
    void sort_(vector<int>& ar){
        sort(ar.begin(),ar.end());
    }
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort_(g);
        sort_(s);
        int n = g.size(), m = s.size();
        int ans = 0;
        int i=0, j=0;
        
        while(i<n && j<m){
            if(s[j]>=g[i]){
                ans++;
                j++;
                i++;
            }else{
                j++;
            }
                
        }
        return ans;
    }
};