class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
          vector<string>ans;
        unordered_set<string>tmp;

    for(auto st:queries){
        for(auto dic:dictionary){
            int cnt=0;
            for (int i = 0; i < dic.length(); ++i) {
                if(dic[i]!=st[i])cnt++;
            }
            if(cnt<=2){
                ans.push_back(st);
              //  cout<<st<<"  "<<dic<<"\n";
                break;
            }
        }
    }
       

    return ans;
    }
};