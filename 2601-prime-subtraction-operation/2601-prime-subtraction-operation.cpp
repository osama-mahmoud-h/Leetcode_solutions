class Solution {
public:
    bool is_prime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    vector<int> get_primes(int start, int end) {
        vector<int> primes;
        for (int num = start; num <= end; num++) {
            if (is_prime(num)) primes.push_back(num);
        }
        return primes;
    }
    bool is_sorted(vector<int> arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] >= arr[i+1]) {
                return false;
            }
        }
        return true;
    }
public:
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size() ,i =n-2;
        vector<int> primes = get_primes(1, 1000);

        while (i>=0){
            if(nums[i+1]<=nums[i]){
             //   cout<<i<<"\n";
                int diff = nums[i]-nums[i+1];
              //  cout<<dif
                int j = 0;
                while (j<primes.size()&& ((nums[i]-primes[j])>=nums[i+1]) && primes[j]<nums[i] ){j++;}
                
                if(primes[j]<nums[i])
                nums[i] -=primes[j];
            }
            i--;
        }
        /* for (const auto &item: nums){
            cout<<item<<"  ,  ";
        }*/
        return is_sorted(nums);
    }
};