class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size() , ans = 0;
        
        unordered_map<string,int>map1;
        unordered_map<string,int>map2;

        for(int i = 0;i<n;i++){
            string row = "" ,col = "";
            for(int j = 0;j<n ;j++){//for rows
                row += to_string(grid[i][j])+"_";
            }
            
            for(int k=0;k<n;k++){//for cols
                col += to_string(grid[k][i])+"_";
            }
         
            map1[row]++;
            map2[col]++;
        }
    
        
        for(auto &item:map1){
            if(map2.find(item.first)!=map2.end()){
                ans += map2[item.first]*map1[item.first];
            }
        }
        
        return ans;
    }
};