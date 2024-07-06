class Solution {
public:
    int passThePillow(int n, int time) {
        int turns = time/(n-1);
        
        int extra_time = time % (n-1);
        bool is_going_foward = !(turns&1);
        
        return is_going_foward ? ++extra_time : n - extra_time;
    }
};