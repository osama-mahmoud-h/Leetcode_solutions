class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        
        for(const auto& log: logs){
            if(log=="./")
                continue;
            else if(log=="../"){
                depth = depth < 1 ? depth : depth-1;
            }else{
                ++depth;
            }
        }
        return depth;
    }
};