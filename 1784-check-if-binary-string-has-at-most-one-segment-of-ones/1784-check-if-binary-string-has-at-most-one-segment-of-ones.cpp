class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0, n = s.length();
        int single = 0, seq = 0;
        while(i < n){
            int sum = 0;
            while(i < n and s[i] == '1'){
                sum++, i++;
            }
            single += sum == 1 ? 1 : 0;
            seq += sum > 1 ? 1 : 0;
            i += sum == 0 ? 1 : 0;
        }
        //cout<<"seq: "<<seq<<" , single: "<<single<<"\n";
        return (seq == 1 and single == 0) || (single == 1 and seq == 0);
    }
};