class Solution {
    void reverse(string&s ,int from, int to){
        while(from<to){
            swap(s[from++],s[--to]);
        }
    }
public:
    string reverseWords(string s) {
        int from=0 , to=0;
        for(auto c: s){
            if(c==' '){
                //cout<<from<<" ,"<<to<<"\n";
                reverse(s,from,to);
                from = to+1;
                
            }
            to++;
        }
        reverse(s,from,to);
        return s;
    }
};