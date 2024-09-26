class MyCalendar {

private:
    bool is_overlapped(int st, int end, vector<pair<int,int>>&cal){
        for (const auto &item: cal){
            int a = item.first, b = item.second;
           if (st < b && end > a){
                return true;
            }
        }
        return false;
    }
    vector<pair<int,int>>calender;
public:
    MyCalendar() {
    }

    bool book(int start, int end) {
        if(is_overlapped(start,end,calender)){
            return false;
        }
        calender.push_back({start, end});
        return true;
    }
};