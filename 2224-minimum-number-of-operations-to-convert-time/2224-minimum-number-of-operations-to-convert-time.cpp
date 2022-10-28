class Solution {
public:
    int convertTime(string current, string correct) {
          vector<int>adds={1,5,15,60};

    int h1 =stoi(current.substr(0,2)),
        m1 =stoi(current.substr(3,2)),
        h2 =stoi(correct.substr(0,2)),
        m2 =stoi(correct.substr(3,2)) ;

    int totalCur = h1*60+m1;
    int totalCor = h2*60+m2;
    int diff = totalCor-totalCur;
        
    
    int ans=0;
    int i=adds.size()-1;
    while (i>=0&&diff>0){
        if(adds[i]<=diff){
            diff-=adds[i];
            ans++;
        } else{
            i--;
        }
    }

    return ans;
    }
};