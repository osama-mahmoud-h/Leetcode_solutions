class Solution {
public :
    bool isUnique(string s){
    unordered_set<char>set;
    for(auto c:s){
        if(set.find(c)!=set.end()){
            return 0;
        }
        set.insert(c);
    }
    return 1;
}
int backtrack(string tmp ,vector<string>& arr,int idx){
    if(idx>=arr.size()){
        return 0;
    }
    int pick =0,leave=0;
    if(isUnique(arr[idx]) && isUnique(tmp+arr[idx]) ){
        pick = arr[idx].length() + backtrack(tmp+arr[idx],arr,idx+1);
    }
     leave = backtrack(tmp,arr,idx+1);
    return max(pick,leave);
}

int maxLength(vector<string>& arr) {
    string tmp = "";
    return backtrack(tmp,arr,0);
}
};