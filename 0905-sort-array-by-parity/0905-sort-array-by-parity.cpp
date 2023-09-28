class Solution {
    void swap(vector<int>&ar,int from,int to){
        int temp = ar[from];
        ar[from]=ar[to];
        ar[to]=temp;
    }
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=0, n=nums.size();
        
        while(i<n&&(nums[i]%2==0))i++;
        
        j=i+1;
        while(j<n){
            if(nums[j]%2==0){
                swap(nums,i,j);
                i++;
            }
            j++;
        }
        return nums;
        
    }
};