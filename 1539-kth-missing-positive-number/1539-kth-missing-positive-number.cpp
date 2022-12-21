class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size(); 
        //case 1 [4] missing =4-(0+1)=3
        if((arr[0]-1)>=k){
            return k;
        }
        //case 2 if((arr[n-1]-n)<k) -> missed= k+ar[n-1]-n
        if((arr[n-1]-n)<k){
            return k-(arr[n-1]-n)+arr[n-1];
        }
        
       // third case between 2 numbers
        //binary search
        int l=0,h=n-1;
        while(l<h){
            int mid = (l+h)/2;
            if((arr[mid]-mid-1)<k){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        // if((arr[l]-(l+1))>k){
        //     l--;
        // }else{
        //     return k-(arr[l]-(l+1))+arr[l];
        // }
      //  cout<<l<<"\n";
        
        return k-(arr[l]-l)+arr[l];
    }
};