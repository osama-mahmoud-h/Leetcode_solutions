
class Solution {
private:
    bool  isEqual(vector<int>&ar1,vector<int>&ar2){
        for (int i = 0; i < ar1.size(); ++i) {
            if(ar1[i] != ar2[i])
                return 0;
        }
        return 1;
    }
    void xor_ar(vector<int>&ar){
        int n = ar.size();
        if(n<=1)return;

        for (int i = 0; i < n-1; ++i) {
            ar[i] ^= ar[i+1];
        }
        ar[n-1] ^=ar[0];
    }
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        if(n==1 && derived[0]==1)
            return 0;
        vector<int>original(n);

        int x= 0;//fisrt case

        for (int k = 0; k <=1 ; ++k) {
            
            original[0]=k;
            
            for (int i = 1; i < n-1; ++i) {
                original[i] = derived[i-1]^original[i-1];
            }
            
            original[n-1] = original[0]^derived[n-1];

            xor_ar(original);
            
            if (isEqual(original,derived))
                return 1;
        }
        

        return 0;

    }
};