class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int cnt = 0;
        string seq = word;
        while(sequence.find(seq) != string::npos){
            cnt++;
            seq += word;
        }
        
        return cnt;
    }
};