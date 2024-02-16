
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for (const auto &item: arr)
            freq[item]++;
        int unique_count = freq.size();
        
        //put map values in array;
        vector<int>freq_values;
        for (const auto &item: freq)
            freq_values.push_back(item.second);
        
        sort(freq_values.begin(),freq_values.end());
        for (const auto &item: freq_values){
            if(k>=item){
                k-=item;
                unique_count --;
            }else{
                break;
            }
        }
        return  unique_count;
    }
};