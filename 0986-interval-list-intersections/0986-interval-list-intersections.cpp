class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
     int i=0,j=0;
     while(i<firstList.size()&&j<secondList.size()){
         auto ft = firstList[i];
         auto sc = secondList[j];
         if(max(ft[0],sc[0])<=min(ft[1],sc[1])){
             ans.push_back(vector<int>{max(ft[0],sc[0]),min(ft[1],sc[1])});
         }
         if(sc[1]<ft[1]){
             j++;
         }else if(sc[1]>ft[1]){
             i++;
         }else{
             i++;j++;
         }
     }  

     return ans;
    }
};