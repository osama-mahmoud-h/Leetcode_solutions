class Solution {
public:
   bool divide(vector<vector<int>>& matrix,int l,int h,int target){
    int n = matrix.size();
    if(h>n || l>h){
        return 0;
    }
    if(l==h){
        return binary_search(matrix[l].begin(),matrix[l].end(),target);
    }
    int mid = (l+h)/2;

    return divide(matrix,l,mid,target)||divide(matrix,mid+1,h,target);
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size()-1;
    return divide(matrix,0,n,target);
}
};