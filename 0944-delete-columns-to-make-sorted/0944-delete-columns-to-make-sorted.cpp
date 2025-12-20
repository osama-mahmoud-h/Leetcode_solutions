class Solution {
private:
    bool is_sorted(vector<string>& strs, int idx){
        int rows = strs.size();
        for (int i = 0; i<rows-1; i++){
            if(strs[i][idx] > strs[i+1][idx])
                return 0;
        }
        return 1;
    } 
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        int cols = strs[0].length();
         for (int i = 0; i<cols; i++){
            if(!is_sorted(strs, i))
                ans++;
         }

        return ans;
    }
};