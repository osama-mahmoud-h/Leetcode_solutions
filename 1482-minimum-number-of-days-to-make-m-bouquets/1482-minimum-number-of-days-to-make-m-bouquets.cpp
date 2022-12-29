class Solution {
public:
   int can_make_poquets(vector<int>& bloomDay, int days,int m, int k){
    int n = bloomDay.size();
    int sum=0;

    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        while (i<n && days>=bloomDay[i] && (cnt<k)){
                    //    cout<<i<<"  ";

            cnt++;
            i++;
        }
        //cout<<"\n";
        if(cnt==k){
            sum++;
            i--;
        }
    }
    return sum;
}
int minDays(vector<int>& bloomDay, int m, int k) {
    long long int l=1,h=1e9+7;
    int ans=-1;
    
    cout<<can_make_poquets(bloomDay,9,m,k);
        
    while (l<h){
       long long int mid=(l+h)/2;
        if(can_make_poquets(bloomDay,mid,m,k)>=m){
            h=mid;
            ans=mid;
        } else{
            l=mid+1;
        }
    }
        
        return ans;
}
};