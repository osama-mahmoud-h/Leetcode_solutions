class Solution {
private:
    typedef long long int ll;
public:
    long long numberOfWeeks(vector<int>& ar) {
       ll max_ele = *max_element(ar.begin(),ar.end()) , sum = 0;
       for(auto i:ar)
       sum+=i;

      if((sum-max_ele)>=max_ele ||((sum-max_ele)>=max_ele-1))
        return sum;
        
    return (sum-max_ele)*2+1;
    }
};
 