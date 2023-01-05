
#define Pr pair<int,int>
#define vc vector<int>
class Solution{
private:
 
public:
 
    int findMinArrowShots(vector<vector<int>>& points) {
      
        sort(points.begin(),points.end());

        int cnt=1 , n=points.size();
        
        pair<int,int> st={points[0][0],points[0][1]};
        
        for (auto v:points) {

            if(v[0]>st.second){
                st={v[0],v[1]};
                ++cnt;
                continue;
            }
            st = {max(st.first,v[0]),min(st.second,v[1])};
        }
        return cnt;
    }
};