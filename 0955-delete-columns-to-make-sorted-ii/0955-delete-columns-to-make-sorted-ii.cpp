class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        int n = strs.size(), m = strs[0].size();
        
        for(int j = 0; j < m ; ++j){
            bool is_to_del = 0;
            unordered_set<char> ch_set;
            set<int>rows;
            for (int i = 0 ; i < (int)strs.size() - 1; ++i){
                //cout<<strs.size()<<"\n";
                //cout<<"i: "<<i<<" ,j: "<<j<<"\n";
                //cout<<strs[i] <<" , "<<strs[i+1]<<"\n";
                //cout<<strs[i][j] <<" , "<<strs[i+1][j]<<"\n";
                if(strs[i][j] > strs[i+1][j]){
                    is_to_del = 1;
                    break;
                }else if(strs[i][j] == strs[i+1][j]){
                    rows.insert(i), rows.insert(i + 1);
                }
            }

            if(!rows.empty()){
                vector<string> temp = strs;
                strs.clear();
                for (const auto &row: rows){
                    strs.push_back(temp[row]);
                  //  cout<<"pushed_[idx, val]: ["<<row<<", "<<strs[row]<<"] , ";
                }
                //cout<<"\n";
            }
            //cout<<"is todelete ? : "<<is_to_del<<"\n";
            if(!is_to_del and rows.empty())
                return ans;
            else if(is_to_del)ans++;
        }
        return ans;
    }
};