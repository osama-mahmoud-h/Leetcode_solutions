class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int ans=0;
        map<int,int>mp;
        for(auto i:nums){
            mp[i]^=i;
        }
        
        for(auto i:mp){
            if(i.second!=0)return false;
        }
    
        
        return true;
    }
};