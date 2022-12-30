class Solution {
public:
    int hIndex(vector<int>& A) {
        int n = A.size();
        int l = 0, h = n;
        int ans =0;
        while(l<h){
            int mid=(l+h)/2;
            if(A[mid]>=(n-mid)){
                ans=(n-mid);
                h=mid;
            }else{
                l = mid+1;
            }
        }
        return ans;;
    }
};