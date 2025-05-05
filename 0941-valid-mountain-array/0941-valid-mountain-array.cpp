class Solution {
private :
    int find_max_idx(vector<int>&ar){
        auto maxIt = std::max_element(ar.begin(), ar.end());
        int maxIndex = std::distance(ar.begin(), maxIt);
        return maxIndex;
}
public:
    bool validMountainArray(vector<int>& ar) {
        int n = ar.size();
        int maxIndex = find_max_idx(ar);
        
        if(maxIndex==0 or maxIndex==n-1){
            return 0;
        }

        for (int i = maxIndex; i < n-1; ++i) {
            if(ar[i+1]>=ar[i])
                return 0;
        }
        for (int i = maxIndex; i > 0 ; --i) {
            if(ar[i-1]>=ar[i])
                return 0;
        }
        return 1;
    }
};