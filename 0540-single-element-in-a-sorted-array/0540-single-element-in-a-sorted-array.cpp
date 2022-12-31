class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        int l = 0, h = n-1;
        
        while(l<h){
            int mid =(l+h)/2;
            
            if((mid+1)<n && A[mid]==A[mid+1]){
                if((mid+2)%2==0){
                    l=mid+1;
                }else{
                     h=mid;
                }
            }else if((mid-1)>=0 && A[mid]==A[mid-1]){
                 if( (mid+1)%2==0){
                    l=mid+1;
                }else{
                     h=mid;
                }
            }
            else{
                return A[mid];
            }
        }
        
        return A[l];
    }
};