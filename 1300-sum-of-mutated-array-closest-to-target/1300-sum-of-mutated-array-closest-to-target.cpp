class Solution {
public:
    int ar_sum(vector<int>& ar ,int min_val,int target){
        int sum = 0;
        for(auto i:ar){
            sum+=min(i,min_val);
        }
        return abs(sum-target);
    }
    
    int findBestValue(vector<int>& ar, int target) {
        int l = 0 , h=1e6;
        
        while(l<h){
            int mid = (l+h)/2;
            if(ar_sum(ar,mid,target) > ar_sum(ar,mid+1,target)){
                l = mid+1;
            }else{
                h=mid;
            }
        }
        return l;
    }
};