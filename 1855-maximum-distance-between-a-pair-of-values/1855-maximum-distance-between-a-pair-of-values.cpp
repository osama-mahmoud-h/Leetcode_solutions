class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        int mx=0;
        int target=n2-1;

        for (int i = 0; i < n1; ++i) {
            if(i>=n2){
                break;
            }
            //do binary search
            int l = i,h=n2-1;
            while (l<h){
                int mid=(l+h)/2;
                if(nums2[mid]>=nums1[i]){
                   l=mid+1;
                   }else{
                     h=mid;
               }
        }
        
       if(l-1>=0&&nums2[l-1]>=nums1[i])
          mx= max(mx,l-i-1);
            
        if(nums2[l]>=nums1[i]){
            mx= max(mx,l-i);
        }
    }
    return mx;
        
    }
};