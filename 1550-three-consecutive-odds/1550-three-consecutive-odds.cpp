class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& ar) {

        for(int i = 1; i< ar.size()-1 ; i++){
            if((ar[i-1]&1) and (ar[i]&1) and (ar[i+1]&1))
                 return 1;
        }
        return 0;
    }
};