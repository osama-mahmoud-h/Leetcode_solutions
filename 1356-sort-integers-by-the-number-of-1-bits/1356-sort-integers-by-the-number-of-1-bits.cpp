class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
         
        int n = arr.size();
        //vector<int> ans;
        sort(arr.begin(), arr.end(), [&](int i , int j){
           int bits_i = __builtin_popcount(i) , bits_j = __builtin_popcount(j);
            if(bits_i == bits_j){
                return i < j; 
            }
            return bits_i < bits_j;
        });
        return arr;
    }
};