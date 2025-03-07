
class Solution {
private:
    bool is_prime(int n){
        if(n<=2)
            return false;
        for (int i = 2; i <= sqrt(n); ++i) {
            if(n%i == 0 )
                return false;
        }
        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>primes = {-1,-1};
        int last_prime = -1;
        int min = INT_MAX;
        for (int i = left; i <= right ; ++i) {
            if(!is_prime(i)){
                continue;
            }
            if(primes[0] == -1)
                primes[0]=i;
            else if(primes [1] == -1){
                min = i - primes[0];
                primes[1] = i;
            } else{
                if( (i- last_prime < min)){
                    min = i - last_prime;
                    primes = {last_prime, i};
                }
            }
            last_prime = i;
        }

        return (primes[0] == -1 or primes[1] == -1) ? vector<int>{-1,-1} : primes;
    }
};
