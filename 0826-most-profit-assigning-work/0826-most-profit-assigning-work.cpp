class Solution {
public:
  typedef  pair<int,int> P;
static bool cmp_(P p1,P p2){
    return p1.first < p2.first;
}
int numGreater(int num, vector<int>& worker){
    int n=worker.size();
    int ans=-1;
    int l=0, h=n;
    while (l<h){
        int mid = (l+h)/2;
        if(worker[mid]>=num){
            ans=mid;
            h=mid;
        } else{
            l=mid+1;
        }
    }
    return ans==-1 ? 0 : (n-ans);
}

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    int max = 0,ans=0;
    vector<P> ar(profit.size());

    for (int i = 0; i < profit.size(); ++i) {
        ar[i] = {difficulty[i],profit[i]};
    }
    sort(ar.begin(),ar.end(), cmp_);
    sort(worker.begin(),worker.end());
//cout<<ar.size()<<"\n";
    for (auto p:ar) {
        int greater = numGreater(p.first,worker);

        if(p.second>=max){
            ans += greater*(p.second)-max*greater;
            max=p.second;
                      //  cout<<ans<<"\n";

        } else{
            if(ans==0)
            ans+=greater*max;
        }
    }
    return ans;
}
};