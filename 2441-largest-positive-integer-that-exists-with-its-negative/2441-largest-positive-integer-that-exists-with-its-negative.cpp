class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int mx=-1e4;
        unordered_set<int> set;
        for(auto i:nums)
            set.insert(i);
        
        sort(nums.rbegin(),nums.rend());
        
        for(auto i:nums)
            if(set.count(-i)>0){
                mx=max(mx,i);
            }
return mx<-1e3?-1:mx;
    }
};