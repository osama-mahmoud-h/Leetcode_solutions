class Solution {
public:
   bool containDuplicate(vector<string>&str,string& s ){
    vector<int>map(26,0);
    for(auto st:str){
        for(char ch:st) {
            map[ch - 'a']++;
        }
    }

    for(auto ch:s){
        map[ch-'a']++;
        if(map[ch-'a']>1){
            return 1;
        }
    }
    return 0;
}
bool containDuplicate(string s){
    unordered_set<char>set;
    for(auto c:s){
        if(set.find(c)!=set.end()){
            return 1;
        }
        set.insert(c);
    }
    return 0;
}
int backtrack(vector<string>tmp ,vector<string>& arr,int idx){
    if(idx>=arr.size()){
        return 0;
    }
    int pick =0,leave=0;
    if(!containDuplicate(arr[idx]) && !containDuplicate(tmp,arr[idx]) ){
        tmp.push_back(arr[idx]);
        pick = arr[idx].length() + backtrack(tmp,arr,idx+1);
        tmp.pop_back();
    }
     leave = backtrack(tmp,arr,idx+1);
    return max(pick,leave);
}

int maxLength(vector<string>& arr) {
    vector<string> tmp;
    return backtrack(tmp,arr,0);
}
};