class Solution {
private:
     void sort_(vector<int>& ar){
           sort(ar.begin(), ar.end());
    }
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort_(players) , sort_(trainers);
        int n = players.size(), m = trainers.size();
        int ans = 0;
        int i=0, j=0;
        
        while(i<n && j<m){
            if(players[i] <= trainers[j]){
                ans++;
                j++ , i++;
            }else{
                j++;
            } 
        }
        return ans;
    }
};