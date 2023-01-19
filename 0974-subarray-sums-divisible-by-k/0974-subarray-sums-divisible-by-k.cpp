class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //cout<<14%1;
        int n = nums.size();
       int ans =0;
        //int sum = 0;
        nums[0] = (nums[0]%k+k)%k;
        
        unordered_map<int,int>map;
        
        for(int i=1;i<n ;i++){
            nums[i] = (nums[i]%k+k)%k;
            nums[i] = (nums[i]+nums[i-1])%k;
        }
        
        for(int i:nums){
            ans+=map[i];
            ans+= i ==0?1:0;
            map[i]++;
        }
        
        return ans;
    }
};

/*
[2,0,0]
[3,2,0,5,10]
[3,5,5,10,15]


[-3,-2,7,-5,10]
[-3,-2],[-2,7],[-5],[10],[-2,7,-5],[-2,7,-5,10],[-5,10]

[-3,-5,2,-3,7]





*/