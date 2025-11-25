class Solution {
public:
    int smallestRepunitDivByK(int k) {
         if(k%2==0)
          return -1;
        int n = 1;
        int cnt = 1;
        while(cnt <= k){
            if(n%k == 0)
              return cnt;
            n = (n*10 + 1) % k;
            ++cnt;
        }
        return -1; 
    }
};