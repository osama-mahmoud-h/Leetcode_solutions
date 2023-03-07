#define ll long long 

class Solution {
private:
    ll get_total_trips(vector<int>&time,ll t){
        ll sum = 0;
        for (const auto &item: time){
            sum += t/item;
           // cout<<sum<<"\n";
        }
        return sum;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll n = time.size(), l = 0, r = 1LL * *max_element(time.begin(), time.end()) * totalTrips;
        ll sum = 0, ans=-1;
        cout<<n<<"\n";
        while (l<r){
            ll m = (l+r)/2;
            ll total_trips = get_total_trips(time,m);
            if(total_trips >= totalTrips){
                r=m;
            } else{
                l=m+1;

            }
        }
        
        return l;
    }
};