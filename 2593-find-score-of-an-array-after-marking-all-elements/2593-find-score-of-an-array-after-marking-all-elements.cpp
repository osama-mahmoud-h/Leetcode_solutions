struct Ele{
    int index;
    int val;
    bool marked;
     Ele(int val, int index) : val(val), index(index) {
        this->marked = false;
    }
};
class Compare {
public:
    bool operator()(Ele a, Ele b){
        if(a.val == b.val){
            return a.index > b.index;
        }
        return a.val > b.val;
    }
};

class Solution {
public:
    long long findScore(vector<int>& nums) {
        unordered_set<int>marked_idx;
        long long score = 0;

        priority_queue<Ele,vector<Ele>,Compare>pq;

        for (int i = 0; i < nums.size(); ++i) {
            pq.emplace(nums[i], i);
        }

        while (!pq.empty()){
            Ele top = pq.top();
            pq.pop();
            
            if(marked_idx.find(top.index) != marked_idx.end()){
                continue;
            }
            
            for(int j = -1; j<= 1; j++)
                marked_idx.insert(top.index + j);

            score += top.val;
        }

        return score;
    }
};