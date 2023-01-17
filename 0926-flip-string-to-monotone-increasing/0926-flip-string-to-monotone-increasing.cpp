class Solution{
private:
    int OO = 1e6;
    vector<vector<int>>memo;
    int hepler(string &s,int idx,int prev){
        if(idx>=s.length()){
            return 0;
        }
      
        int cur = s[idx]-'0';
      //  cout<<idx<<" , "<<cur<<", "<<prev<<"\n";
          if(memo[idx][prev]!=-1){
            return memo[idx][prev];
        }

        int change =0;
        int not_change = 0;
       // int flip = cur;
        
        if(prev==1){
            if(cur==0){ //changeit and not chnage = +oo
                change = 1 + hepler(s,idx+1,1);
                not_change = OO;
            }else{
                change = OO;
                not_change = hepler(s,idx+1,1);
            }
        }else{ //prev = 0
            change = 1 + hepler(s,idx+1,cur==1?0:1);
            not_change = hepler(s,idx+1,cur);
            //flp==1?0:1;
        }
        memo[idx][prev] = min(change,not_change);
        return min(change,not_change);
    }
public:
    int minFlipsMonoIncr(string s) {
        cout<<s.size()<<"\n";
        memo =  vector<vector<int>>(s.length(),vector<int>(2,-1));
        return hepler(s,0,0);
    }
};