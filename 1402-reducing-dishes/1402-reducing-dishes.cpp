

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int sum = 0;
        int j=n;
        for (int i = n-1; i >=0 ; --i) {
            sum+=satisfaction[i];
            if(sum>=0){
                j--;
            }else{
                break;
            }
        }
        int i=1;
        sum = 0;
        for ( ; j <n ; ) {
            sum+= (i++) * satisfaction[j++];
        }
        
        return sum;
    }
};