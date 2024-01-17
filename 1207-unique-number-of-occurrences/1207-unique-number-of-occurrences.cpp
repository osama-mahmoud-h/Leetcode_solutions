class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> map;
       
        for(auto i:arr){
            map[i]++;
        }
        
        unordered_map<int,int> occ;

        for(auto i:map){
          
            occ[i.second] ++;
            
            if(occ[i.second]>1){
               return false;
           }
        }
        
        
        return true;  
    }
};