class Solution {
public:
  unordered_map<int,int>memo;

int getMax(vector<int>&ar,map<int, int> &map,int idx){
   
    if(idx>=ar.size()){
        return 0;
    }
    if(memo.find(ar[idx])!=memo.end()){
        return memo[ar[idx]];
    }
    int leave = ar[idx]*map[ar[idx]]+getMax(ar,map,(idx+1)<ar.size()&&(ar[idx+1]-ar[idx]<2)?idx+2:idx+1);
    int pick = getMax(ar,map,idx+1);
        
    memo[ar[idx]]=max(pick,leave);
    return max(pick,leave);
}

int deleteAndEarn(vector<int> nums) {
    map<int, int> map;
    for (auto i:nums) {
        map[i]++;
    }
    vector<int>ar;
    for(auto i:map){
        ar.push_back(i.first);
    }
    int mx = 0;
    mx=getMax(ar,map, 0);
  
    return mx;

}
};
/*
3451
*/