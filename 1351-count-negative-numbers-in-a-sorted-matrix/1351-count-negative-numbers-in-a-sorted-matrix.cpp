class Solution {
public:
   
int countNegatives(vector<int>& grid){
    int l=0,h=grid.size()-1;
    while (l<h){
        int mid =(l+h)/2;
        if(grid[mid]>=0){
            l=mid+1;
        } else{
            h=mid;
        }
    }
    if(grid[l]>=0)
        return 0;
    return grid.size()-l;
}
int countNegatives(vector<vector<int>>& grid) {
    int ans = 0 ;
    for(auto vc:grid){
        ans+=countNegatives(vc);
    }
    return ans;
}

};