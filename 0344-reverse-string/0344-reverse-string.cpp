class Solution {
private :
    void reverse(vector<char>& s, int low, int high){
        if(low >= high){
            return;
        }
        swap(s[low], s[high]);
        reverse(s, low+1, high-1);
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
    }
};