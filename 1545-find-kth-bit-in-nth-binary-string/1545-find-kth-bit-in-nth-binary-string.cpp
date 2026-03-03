class Solution {
    string invert(string s){
        int n = s.length();
        for (int i = 0; i < n; ++i){
            s[i] = !(s[i]-'0') + '0';
        }
        return s;
    }
    string reverse(string s){
        std::reverse(s.begin(), s.end());
        return s;
    }
public:
    char findKthBit(int n, int k) {
        string base = "0";
        for (int i = 1; i < n; ++i){
            //cout<<"invert(reverse(base)): "<<invert(reverse(base))<<"\n";
            base = base + "1" + invert(reverse(base));
        }
        //cout<<"base: "<<base<<"\n";
        return base[k-1];
    }
};