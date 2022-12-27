class Solution {
public:
  static bool  cmp_(pair<int,int>p1,pair<int,int>p2){
    return abs(p1.first-p1.second)<abs(p2.first-p2.second);
}
int maximumBags(vector<int>& capacity, vector<int>& rocks, int k) {
    
    vector<pair<int,int>>rock_capacity(rocks.size());
    
    for(int i=0;i<size(rocks);i++){
        rock_capacity[i]={capacity[i],rocks[i]};
    }
    
    sort(rock_capacity.begin(),rock_capacity.end(),cmp_);
    
    int ans = 0;
        for(auto p:rock_capacity){
        if((p.first-p.second)==0){
           ans++;
            continue;
        }
        if((k-(abs(p.first-p.second)))<0){
            break;
        }
         k-=abs(p.first-p.second);
        ans++;
    }
    return ans;
}
};