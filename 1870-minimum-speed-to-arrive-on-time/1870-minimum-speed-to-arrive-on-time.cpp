class Solution {
public:
    bool can_arrive(vector<int>& dist,int speed, double hour){
    int n = dist.size();
    double sum = 0;

    for (int i = 0; i < n-1; ++i) {
        sum += ceil(dist[i]*1.0/speed);
    }
    sum += (dist[n-1]*1.0/speed);
    return sum<=hour;
}
    
int minSpeedOnTime(vector<int>& dist, double hour) {
    int l = 1 , h = 1e9;
    int ans = -1;
   
   // cout<<can_arrive(dist,1,2.7)<<"\n";
        
    while (l<h){
        int mid = (l+h)/2;
        if(can_arrive(dist,mid,hour)){
            ans = mid;
            h = mid ;
        }else{
            l = mid+1;
        }
    }

    return ans;
}
};