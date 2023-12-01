
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int>map;
        map[nums[0]]=1;
        if(nums[0]==k)ans++;
        for (int i = 1; i < n; ++i) {
            nums[i] += nums[i-1];
            if(nums[i]==k)ans++;
          //  cout<<nums[i]<<" , "<<map[nums[i]]<<"\n";
            if(map.find(nums[i]-k)!=map.end()){
                ans+=map[nums[i]-k];
            }
            map[nums[i]]++;

        }
        return ans;
    }
};
