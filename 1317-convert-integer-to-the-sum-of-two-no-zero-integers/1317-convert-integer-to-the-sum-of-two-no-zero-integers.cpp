class Solution {
    private:
    bool have_zero(int &n){
        return to_string(n).find("0")!=string::npos;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans = {1, n-1};

        while(ans[0]<=n/2){
            if(!have_zero(ans[0]) and !have_zero(ans[1]))
                return ans;
            ++ans[0], --ans[1];    
        }

        return ans;
    }
};