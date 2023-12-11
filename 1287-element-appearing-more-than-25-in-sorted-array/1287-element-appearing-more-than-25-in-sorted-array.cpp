class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i = 0;i<n; i++){
            int cur = arr[i];
            int cnt = 0;
            while(i<n && arr[i] == cur){
                cnt++;
                i++;
            }
            i--;
            if(cnt > n/4){
                ans = cur;
                break;
            }
        }
        
        return ans;
    }
};