class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, _ = 0;
        for(const char& move : moves){
            l += move == 'L' ? 1 : 0;
            r += move =='R' ? 1 : 0;
            _ += move =='_' ? 1 : 0; 
        } 
        return max(l, r) + _ - min(l, r);
    }
};