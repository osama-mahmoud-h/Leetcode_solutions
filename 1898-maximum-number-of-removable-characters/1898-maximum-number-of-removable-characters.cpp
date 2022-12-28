class Solution {
public:
   
bool is_subsquence(string s, string p, vector<int>& removable,int end){
    int n=s.length(), m=p.length();
    int i=0,j=0;

    unordered_set<int>set;
    for (int k = 0; k <=end; ++k) {
        set.insert(removable[k]);
    }

    while (i<n&j<m){
        if(set.find(i)==set.end()){
            if(p[j]==s[i]){
                j++;
            }
        }
        i++;
    }
    return j==m;
}
int maximumRemovals(string s, string p, vector<int>& removable) {
    int l=0,
        h=removable.size(),
        ans=-1;

    while (l<h){
        int mid =(l+h)/2;
        if(is_subsquence(s,p,removable,mid)){
            cout<<mid<<"\n";
            ans = mid;
            l=mid+1;
        } else{
            h=mid;
        }
    }
    return ans+1;
}
};