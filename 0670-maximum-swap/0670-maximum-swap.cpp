class Solution {
public:
    int maximumSwap(int num) {
        string num_str = to_string(num);
        int n = num_str.length();

        vector<pair<char,int>>val_idx;
        unordered_map<char,int>last_occ;
        for (int i = 0; i < num_str.length(); ++i) {
            val_idx.push_back({(num_str[i]), i});
            last_occ[num_str[i]] = i;
        }

       sort(val_idx.begin(),val_idx.end(),[&](pair<char,int> p1, pair<char,int>p2){
            return p1.first > p2.first;
        });

     

        int i = 0;
        while (i<n){
            if(val_idx[i].first > num_str[i]){
                num_str[last_occ[val_idx[i].first]] = num_str[i];
                num_str[i] = val_idx[i].first;
                break;
            }
            i++;
        }
        return stoi(num_str);
    }
};