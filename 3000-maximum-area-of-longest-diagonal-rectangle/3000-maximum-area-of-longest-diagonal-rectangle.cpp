class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0;
        double mx = 0;
        for(auto const &dimension : dimensions){
            double sqrt_ = sqrt(dimension[0] * dimension[0] + dimension[1] * dimension[1]);
            if(sqrt_ > mx ){
                mx = sqrt_ ;;
                ans = dimension[0] * dimension[1];
            }else if(sqrt_ == mx and (dimension[0] * dimension[1]) > ans){
                ans = dimension[0] * dimension[1];
                mx = sqrt_;
            }
        }
        return ans;
    }
};