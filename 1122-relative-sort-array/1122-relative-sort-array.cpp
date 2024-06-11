class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>map;
        
        int i = 0;
        for(const auto&item : arr2)
            map[item] = ++i;
        
        sort(arr1.begin(), arr1.end(),[&map, i](int a, int b){
            int num1  = map.find(a) != map.end() ? map[a] : a + i; 
            int num2 = map.find(b)!=map.end() ? map[b] : b + i; 
            return num1<num2;
        });
        
        return arr1;
    }
};