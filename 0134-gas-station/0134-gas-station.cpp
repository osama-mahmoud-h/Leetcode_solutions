class Solution {
public:
 bool canArrive(vector<int>& gas, vector<int>& cost,int idx){
    int cnt=0;
    int ans=0;
    while (cnt<gas.size()){
        idx=idx%(gas.size());
        ans+=gas[idx];
        if((ans-cost[idx])<0){
            return 0;
        }
        ans-=cost[idx];
        cnt++;
        idx++;
    }
     if(ans>=0){
         return 1;
     }
   else return 0;
}
    
static bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.first>p2.first;
}
    
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int sumGas = 0, sumCost=0;
   for(auto i:gas)
       sumGas+=i;
   for(auto i:cost)
       sumCost+=i;

    if(sumCost>sumGas)return -1;

    vector<pair<int,int>>tmp(gas.size());

    for (int i = 0; i < gas.size(); ++i) {
        tmp[i] = make_pair (gas[i]+gas[(1+i)%gas.size()]-cost[i] , i);
    }
        sort(tmp.begin(),tmp.end(),cmp);

    int ans=0;
    for (int i = 0; i < gas.size(); ++i) {

        if(tmp[i].first>0){
            if(canArrive(gas,cost,tmp[i].second)){
                return tmp[i].second;
            }
        }
    }
    return -1;
}
};

/*
[1,3,6,10,15]

============================



*/