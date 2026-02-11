class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        unordered_map<int,int> first;  // diff -> earliest index
        unordered_map<int,int> freq;   // number -> frequency in prefix
        
        int distinctEven = 0;
        int distinctOdd = 0;
        int diff = 0;
        int ans = 0;
        
        first[0] = -1;  // base case
        
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            
            freq[x]++;
            
            // if first occurrence, update distinct count
            if (freq[x] == 1) {
                if (x % 2 == 0)
                    distinctEven++;
                else
                    distinctOdd++;
            }
            
            diff = distinctEven - distinctOdd;
            
            if (first.count(diff)) {
                ans = max(ans, i - first[diff]);
            } else {
                first[diff] = i;
            }
        }
        
        return ans;
    }
};
