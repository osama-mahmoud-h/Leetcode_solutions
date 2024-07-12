class Solution {
private :
    int count_max_gain(string &s, int a, int b) {
        stack<char>st;
        int cnt = 0;
        for (const auto &item: s){
            if(!st.empty() and st.top()==a and item == b){
                ++cnt;
                st.pop();
            }else{
                st.push(item);
            }
        }
        s = "";
        while (!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return cnt;
    }
public:
    int maximumGain(string s, int x, int y) {
        char a = x>y ? 'a' : 'b';
        char b = x>y ? 'b' : 'a';
        
        int max_gain_count = count_max_gain(s,a,b);
        int min_gain_count = count_max_gain(s,b,a);
        
        if(a=='b')
            swap(x,y);
        return  max_gain_count * x + min_gain_count * y;
    }
};