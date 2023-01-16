
class Solution {
private:
    bool intersect(vector<int>& v1,vector<int>&v2){
         int x1=v1[0],x2=v1[1];
        int y1=v2[0],y2=v2[1];
        
        return (x1 >= y1 && x1 <= y2) ||
               (x2 >= y1 && x2 <= y2) ||
               (y1 >= x1 && y1 <= x2) ||
               (y2 >= x1 && y2 <= x2);
    }
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;

        int cnt=0, n=intervals.size();

        for (int j = 0; j < n; ++j) {

            if(!intersect(intervals[j],newInterval)){
                ans.push_back(intervals[j]);
            } else{
                while (j<n&&intersect(intervals[j],newInterval)){
                    newInterval[0]=min(intervals[j][0],newInterval[0]);
                    newInterval[1]=max(intervals[j][1],newInterval[1]);
                    j++;
                }
                j--;
                ans.push_back(newInterval);
                cnt++;
            }
        }
        if(cnt==0){
            ans.push_back(newInterval);
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};
