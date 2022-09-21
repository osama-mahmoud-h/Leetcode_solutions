class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       unsigned int all=0;
        for(auto i:nums){
            all^=i;
        }
      //  cout<<all;
    all&=-all;
        int f=0;
        int l=0;
        
        for(int i:nums){
           if((all&i)==all){
               f^=i;
           }else{
               l^=i;
           }
        }
        
        return vector<int>{f,l};
    }
};

/*

101
011
110

010
101

*/