class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
         vector<int> ans;
         for (const auto &i : nums){
             int num = i;
             list<int>temp;
             while(num>0){
                temp.push_front(num%10);
                num /=10;
             }
             while(!temp.empty()){
                ans.push_back(temp.front());
                temp.pop_front();
             }
         }
         return ans;
    }
};