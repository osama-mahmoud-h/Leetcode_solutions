class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>cnt(501,0);
        int n = arr.size();
       
        for(int  &i : arr){
            cnt[i]++;
        } 

        for(int i = n; i > 0 ;i--){
            if(cnt[i]==i)
                return i;
        }
        return -1;
    }
};