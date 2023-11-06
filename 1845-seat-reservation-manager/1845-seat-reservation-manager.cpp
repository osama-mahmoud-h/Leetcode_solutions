class SeatManager {
private:

    priority_queue<int,vector<int>,greater<int>>available;
public:
    SeatManager(int n) {

        for (int i = 1; i <n+1 ; ++i) {
            available.push(i);
        }
    }
    int reserve() {
        int cur = available.top();
        available.pop();
        return cur;
    }

    void unreserve(int seatNumber) {
        available.push(seatNumber);
    }
};
/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */