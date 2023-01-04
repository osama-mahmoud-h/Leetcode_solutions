class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
         unordered_map<int,int>cnt;
    for(auto i:tasks){
        cnt[i]++;
    }
    int ans = 0;
    for (auto i:cnt) {
        int count=i.second;
        if(count<2){
            return -1;
        }
        
        if(count%3==0) {
            ans += count / 3;
        }else if(count%3==2){
            ans+= count/3 + 1;
        } else{
            ans+=(count-4)/3 + 2;
        }
    }
    return ans;
    }
};