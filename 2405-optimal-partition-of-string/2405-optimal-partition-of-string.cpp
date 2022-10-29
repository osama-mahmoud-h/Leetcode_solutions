class Solution {
public:
    int partitionString(string s) {
         int ans=0;
    unordered_set<char>set;
    
    for(auto c:s){
        if(set.count(c)>0){
            ans++;
            set.clear();
            set.insert(c);
        } else{
            set.insert(c);
        }
    }
        if(set.size()>0)ans++;
    return ans;
    }
};