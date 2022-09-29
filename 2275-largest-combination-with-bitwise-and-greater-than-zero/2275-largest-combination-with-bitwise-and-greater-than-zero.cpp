class Solution {
public:
    int largestCombination(vector<int>& candidates) {
          int mx= *max_element(candidates.begin(),candidates.end());

    int i=1;
    int ans=0;
    while (i<=mx){
        int cnt=0;
     for(auto x:candidates){
            cnt+=(x&i)?1:0;
        }
        ans=max(cnt,ans);
        i<<=1;
    }

    return ans;

    }
};