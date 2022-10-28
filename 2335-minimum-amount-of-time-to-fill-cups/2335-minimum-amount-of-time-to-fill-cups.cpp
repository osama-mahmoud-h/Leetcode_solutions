class Solution {
public:
    int fillCups(vector<int>& amount) {
      
  int ans=0;
    priority_queue<int,vector<int>,less<int>>pq;
    
        for(auto i:amount){
            pq.push(i);
        }

    while (true){
        int fir=pq.top();
        pq.pop();
        if(fir<=0){
            break;
        }
        int sec=pq.top();
        pq.pop();
        fir--;sec--;
        pq.push(fir);
        pq.push(sec);
        ans++;
    }
    return ans;
    }
};