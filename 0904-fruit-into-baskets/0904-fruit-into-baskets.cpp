class Solution {
public:
    int totalFruit(vector<int>& ar) {
        int ans = 0;
        int n= ar.size() , l = 0 ,cnt=0;
        
        unordered_map<int,int>map;
        
        for(int i=0;i<n;i++){
            if(map.size()<2){
                cnt++;
                map[ar[i]]++;  
            }else{
                 if(map.find(ar[i])==map.end()){
                     while(l<i){
                         cnt--;
                         map[ar[l]]--;
                         if(map[ar[l]]<=0){
                             map.erase(ar[l++]);
                             break;
                         }
                         l++;
                     }
                     
                  }
                  cnt++;
                  map[ar[i]]++;  
            }
            
           ans = max(ans,cnt);
        }//end for
        
        return ans;
    }
};