class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int idx = 0, cur = 0, n = nums.size();
        list<int> list;
        while(idx < n){
            if(nums[idx] == pivot)
                list.push_front(pivot);
            else if(nums[idx] >= pivot)
                list.push_back(nums[idx]);
            else
                nums[cur++] = nums[idx];
            idx++;
        }
        while(cur < n ){
            nums[cur++] = list.front();
            list.pop_front();
        }
        
        return nums;
    }
};
