class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       
        int n=nums.size();
        sort (nums.begin(),nums.end());
       
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        
        vector<int>ans;
        for(auto q:queries){
            int l=0,h=n-1;
            while(l<h){
                int mid= (l+h)/2;
                if(nums[mid]>=q){
                    h=mid;
                }else{
                    l=mid+1;
                }
            }
            if(nums[l]>q)l--;
            ans.push_back(l+1);
            
        }
        
        
        return ans;
    }
};