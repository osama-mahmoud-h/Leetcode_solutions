class Solution {
private:
    vector<int> substractPoints(vector<int>p1,vector<int>p2) {
        return {p1[0] - p2[0], p1[1] - p2[1]};
    }

public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        // sort(points.begin(),points.end(),([&](vector<int>&a,vector<int>&b){
        //     if(a[0]==b[0])
        //         return a[1]<b[1];//if the x coordinates are equal then sort by y coordinates
        //     return a[0]<b[0]; // else sort by x coordinates
        // }));
    

        for (int i = 0; i < n-1; ++i) {
            vector<int>pDiff = substractPoints(points[i],points[i+1]);
            if(pDiff[0]==0 || pDiff[1]==0){
                ans += max(abs(pDiff[0]),abs(pDiff[1]));
            } else if(abs(pDiff[0])==abs(pDiff[1])){
                ans += abs(pDiff[0]);
            } else{
                ans += min(abs(pDiff[0]),abs(pDiff[1])) + abs(abs(pDiff[0])-abs(pDiff[1]));
            }
        }
        return ans;
    }
};
