class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=1e9;
        int ans = -1;
        
        while(l<h){
            int mid = (l+h)/2;
            int sum = 0;
            for(auto i:nums){
                sum += ceil(i*1.0/mid);
            }
            if(sum<=threshold){
                ans = mid;
                h=mid;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};