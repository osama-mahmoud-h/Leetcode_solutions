class SeatManager {
private:

    unordered_set<int>reserved;
    priority_queue<int,vector<int>,greater<int>>available;
public:
    SeatManager(int n) {

        for (int i = 1; i <n+1 ; ++i) {
            available.push(i);
        }
    }
    int reserve() {
        if(!available.size()){
            return -1;
        }
        int cur = available.top();
        available.pop();
        reserved.insert(cur);
        return cur;
    }

    void unreserve(int seatNumber) {
        if(reserved.find(seatNumber)==reserved.end())
            return;
        available.push(seatNumber);
        reserved.erase(seatNumber);
    }
};
/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */