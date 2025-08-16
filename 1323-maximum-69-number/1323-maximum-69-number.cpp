class Solution {
public:
    int maximum69Number (int num) {
        string num_str = to_string(num);
        int find_fist_6 = num_str.find('6');
        if(find_fist_6 >= 0){
            num_str[find_fist_6] = '9';
        }
        return stoi(num_str);
    }
};