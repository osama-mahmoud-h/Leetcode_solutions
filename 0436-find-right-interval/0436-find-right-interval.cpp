class Solution {
public:
    typedef vector<int>vct;
int lowIdx(int num,vector<int>& A, unordered_map<int,int>&map){
    int n = A.size();
    int l=0,h=n, ans=-1;
    while (l<h){
        int mid=(l+h)/2;
        if(A[mid]>=num){
            ans=mid;
            h=mid;
        } else{
            l=mid+1;
        }
    }

    return ans==-1 ? -1 : map[A[ans]];
}
vector<int> findRightInterval(vector<vector<int>>& intervals) {

    int n = intervals.size();
    unordered_map<int,int>map;
    vector<int>tmp(n);
    for (int i = 0; i < n; ++i) {
        map[intervals[i][0]]=i;
        tmp[i]=intervals[i][0];
    }

    sort(tmp.begin(),tmp.end());
    vector<int>ans(n);
    int i=0;
    for (auto vc:intervals) {
        int lIdx = lowIdx(vc[1],tmp,map);
        ans[i++]=lIdx;
    }
    return ans;

}
};

//2,3,4