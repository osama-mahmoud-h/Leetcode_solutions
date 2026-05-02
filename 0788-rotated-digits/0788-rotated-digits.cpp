class Solution {
    unordered_map<char,char> map;
    
    int rotate_num(int n){
        string sn = to_string(n);
        
        for(int i = 0; i<sn.length(); i++){
            if(map.find(sn[i]) != map.end()){
                sn[i] = map[sn[i]];
            }else{
                return n;
            }
        }
        return stoi(sn);
    }
public:
    int rotatedDigits(int n) {
        map['5']= '2';
        map['2']= '5';
        map['9'] = '6';
        map['6'] = '9';
        map['0'] = '0';
        map['1'] = '1';
        map['8'] = '8';
        
        int ans= 0;
        unordered_set<int>set;
        
        for(int i = 1; i<= n; i++){
            int new_n = rotate_num(i);
            if(new_n != i){
                ans++;
            }
        }
        
        return ans;
    }
};