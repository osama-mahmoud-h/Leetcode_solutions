class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        /**
         original = [w,x,y,z] 
         derived = [w^x,x^y,y^z,z^z] , xoring derived from [0 : n-2] ->
                   -> w^x ^ x^y ^ y^z = w^z , 
                   if derived from [0 : n-2] == [n-1] return true. 
         * */
         int xor_ = 0;
        for (int i = 0; i < n-1; ++i) {  // loop [0,n-2]
            xor_ ^= derived[i];
        }
        
        return xor_ == derived[n-1];

    }
};