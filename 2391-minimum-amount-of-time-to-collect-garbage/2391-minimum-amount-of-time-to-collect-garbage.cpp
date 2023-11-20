class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        for (int i = 1; i <travel.size() ; ++i) {
        travel [i]+=travel[i-1];
    }
     int sum =0;
    unordered_map<char,int>lastpos;
    for (int i = 0; i <garbage.size() ; ++i) {
        for(char ch:garbage[i]){
            lastpos[ch]=i;
        }
        sum+=garbage[i].size();
    }
    for(auto pos:lastpos){
        if(pos.second-1>=0){
            sum+=travel[pos.second-1];
        }
    }


    return sum;
    }
};