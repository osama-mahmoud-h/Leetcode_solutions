class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum = 0;
        priority_queue<int,vector<int>, less<int>> pq;

        for(auto  &gift: gifts){
            sum += gift;
            pq.push(gift) ;  
        }
        
        
        while(k-->0){
            int top = pq.top();
            pq.pop();
            int rooted = sqrt(top);
            sum += rooted - top;
            pq.push(rooted);
        }
        
        return sum;
    }
};