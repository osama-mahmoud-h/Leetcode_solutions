#define vct vector<int>
class Solution {
    double OO = 1e9+7;
private:
    double slope(vct&p1,vct&p2){
        int x_diff = (p1[0]-p2[0]);
        int y_diff = (p1[1]-p2[1]);
        if(x_diff==0)return OO;
        return y_diff*1.0/x_diff;
    }
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=0 , n = points.size();
        unordered_map<double,int>cnt;
        
        for (int i = 0; i <n ; ++i) {
            cnt.clear();
            for (int j = 0; j < n; ++j) {
                if(i==j){continue;}
                double  slp = slope(points[i],points[j]);
                cnt[slp]++;
            }
            for(auto p:cnt){
                ans=max(ans,p.second);
            }
        }

        return ans+1;
    }

};