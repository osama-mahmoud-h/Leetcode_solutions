class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        unordered_map<int,int>cnt;
        int n=nums.size();
        
        for(int i=1;i<(1<<n);i++){
            int j=0,shft=1,sum=0;
            while(shft<=i){
                if((shft&i)){
                    sum|=nums[j];
                }
                j++;
                shft=shft<<1;
            }
            cnt[sum]++;
        }
        int mx=0;
        for(auto e:cnt){
          // cout<<e.first<<"\n";
        mx=max(e.first,mx); 
        }
            return cnt[mx];
    }
};