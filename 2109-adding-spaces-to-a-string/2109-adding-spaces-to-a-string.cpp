class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans =  "";
        
        int i = 0, j = 0 , n = s.length() , m = spaces.size();

        while(i<n){
            
            if(j<m and  i==spaces[j]){
                ans += ' ';
                j++;
            }
            ans += s[i++];
        }
        return ans;
    }
};