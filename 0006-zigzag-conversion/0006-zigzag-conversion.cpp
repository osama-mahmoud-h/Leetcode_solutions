class Solution {
public:
    string convert(string s, int numRows) {

        int n= s.length();
        string ans = "";
        
        vector<vector<char>> rows;
        
        for (int i = 0; i < n; ) {
            
            vector<char>col(numRows,'\0');
            for (int j = 0; j < numRows &&i<n; ++j) {
                col[j] = s[i++];  
            }
            rows.push_back(col);
            int diagonal = numRows -2;
            for (int j = 0; j < diagonal &&i<n; ++j) {
              //  cout<<s[i]<<"  "; 
                col=vector<char>(numRows,'\0');
                col[numRows-2-j] = s[i++];
                rows.push_back(col);
            }
            //cout<<"\n";
        }

        for (int i = 0; i < numRows; ++i){
            for (const auto &item: rows){
               // cout<<item[i]<<"   ";
                 if(item[i]!='\0')
                ans+=item[i];
            }
            //cout<<"\n";
        }
        
        return ans;
    }
};