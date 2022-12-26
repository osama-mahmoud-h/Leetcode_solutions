class Solution {
public:
    int findDuplicate(vector<int>& A) {
        sort(A.begin(),A.end());
        int n = size(A);
        
        int ans=-1;
        int l = 0, h = n-1;
        
        while(l<h){
           int mid = (l+h)/2;
            if((mid+1)>A[mid]){
              h = mid;
            }else{
                l = mid+1;
            }
        }
        
        return l;
    }
};
/*
using binary search 
[1,2,2,3,4]
[1,2,3,4,4]
[1,2,3,4,5]
*/