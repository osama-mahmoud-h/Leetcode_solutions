class Solution {
public:
    bool can_m_placed(vector<int>& ar,int mid,int m){
        int st=0, n = size(ar) ;
        
        m--;
        for(int i=0;i<n;i++){
           if((ar[i]-ar[st])>=mid){
               m--;
               st=i;
           } 
        }
        
        if(m>0){
            return 0;
        }
        return 1;
        
    }
    int maxDistance(vector<int>& ar, int m) {
        int n = size(ar);
        sort(ar.begin(),ar.end());
        int l=1,h=1e9;
        int ans=-1;
        
        while(l<h){
            int mid = (l+h)/2;
            if(can_m_placed(ar,mid,m)){
               ans=mid;
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return ans;
    }
};