class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int>suffixSum = cardPoints ;
        for (int i = n-2; i >=0 ; --i) {
            suffixSum[i] += suffixSum[i+1];
        }
        for (int i = 1; i < n; ++i) {
            cardPoints[i] += cardPoints[i-1];
        }
        int ans = suffixSum[n-k];
       // cout<<"ans: "<<ans<<"\n";
        int i=-1;

        while (i<k){
            int left = i>=0 ? cardPoints[i] : 0;
            int right = n-k+i+1>=n ? 0 : suffixSum[n-k+i+1];
           // cout<<"left: "<<left<<" right: "<<right<<"\n";
            ans = max(ans,left+right);
            i++;
        }
        return ans;
    }
};
