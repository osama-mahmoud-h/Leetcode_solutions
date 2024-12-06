class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>ban_set;
        for(auto const & i: banned){
            ban_set.insert(i);
        }
        
        int sum = 0;
        int cnt = 0;
        for(int i = 1; i<=n ;i++){
            
            if(ban_set.find(i)!=ban_set.end()){
                continue;
            }
            
            if(sum+i > maxSum)
                break;
            
            sum += i;
            cnt++;
        }
            
            return cnt;
    }
};