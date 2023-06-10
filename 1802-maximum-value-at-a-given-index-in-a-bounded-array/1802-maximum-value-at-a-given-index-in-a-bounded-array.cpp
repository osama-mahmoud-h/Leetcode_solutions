#define ll long long int
class Solution{
private:
   ll sum_squence(int from,int to){
       from = max(0,from);
       to = max(0,to);
       ll up = (ll)to*(to+1)/2;
       ll low = (ll)from*(from+1)/2;
       return up-low;
   }
public:
    int maxValue(int n, int index, int maxSum) {
    int l=0,h=1e9+2;
    int ans=0;
        while (l<h){
           int mid = (l+h)/2;
           int up_empty = n-index-1;
           int low_empty = index;
           ll  sum =sum_squence(mid-1-up_empty,mid-1) +
                    sum_squence(mid-1-low_empty,mid-1)+
                    mid;
            
            sum += (up_empty-(mid-1))>0?(up_empty-(mid-1)):0;
            sum += (low_empty-(mid-1))>0?(low_empty-(mid-1)):0;
          
           if(sum<=maxSum){
               ans = mid;
               l=mid+1;
           } else{
               h=mid;
           }
        }
        //cout<<l<<"\n";
        return ans;
    }
};