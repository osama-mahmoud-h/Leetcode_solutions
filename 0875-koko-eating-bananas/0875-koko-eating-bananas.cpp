class Solution {
public:
  int getTimeNeeded(vector<int>&ar,int speed){
    int hours=0;
    for (int i:ar) {
        hours+=ceil((double)i/speed);
    }
    return hours;
}
int bs(vector<int>& piles,int hours){
    int l=1,h=*max_element(piles.begin(),piles.end());
    cout<<"mx: "<<h<<"\n";
    int ans=h;
    while (l<h){
        int mid = (l+h)/2;
        int time = getTimeNeeded(piles,mid);
        
        if(time<=hours){
            h=mid;
         ans=min(ans,mid);
        } else{
            l=mid+1;
        }
    }
    return ans;
}
int minEatingSpeed(vector<int>& piles, int h) {
    return bs(piles,h);
}
};