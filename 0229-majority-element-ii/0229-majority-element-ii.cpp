class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(), k = n/3,
            first = -1, second = -1,
            cnt1 = 0, cnt2 = 0;
        for(int i:nums){
            if(i==first) cnt1++;
            else if(i==second) cnt2++;
            else if(!cnt1) first = i, cnt1=1 ;
            else if(!cnt2) second = i, cnt2=1 ;
            else cnt1--,cnt2--;
        }
        
        cnt1 = cnt2 = 0;
        
        for(int i : nums){
            if(first==i)cnt1++;
            else if(second==i)cnt2++;
        }
        
        vector<int>ans;
        if(cnt1>k)
            ans.push_back(first);
         if(cnt2>k)
            ans.push_back(second);
        
        return ans;
    }
};

/*

[1,2,1,2,1,2,1,2,9]

*/