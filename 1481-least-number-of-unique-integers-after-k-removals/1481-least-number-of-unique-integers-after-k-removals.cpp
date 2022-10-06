class Solution {
  static  bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}

public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>map;
        for(auto i:arr){
            map[i]++;
        }
        
    vector<pair<int,int>>tmp;
    for (auto i:map){
        tmp.push_back(make_pair(i.first,i.second));
    }

    sort(tmp.begin(),tmp.end(),cmp);
        for(auto i:tmp){
            if(k>=i.second){
                k-=i.second;
                map.erase(i.first);
            }else{
                break;
            }
        }
        
        
        return map.size();
    }
};