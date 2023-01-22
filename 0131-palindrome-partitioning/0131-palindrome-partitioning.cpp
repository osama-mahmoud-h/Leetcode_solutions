
class Solution {
private:
    bool isPlandrom(string &s){
        int l=0,h=s.length()-1;
        while (l<h){
            if(s[l++]!=s[h--]){
                return 0;
            }
        }
        return 1;
    }
    
    void backtrack(string&s,int idx,int size, vector<vector<string>>&ans,vector<string>&tmp){
        int n = s.length();
      //  if(idx>=n){return;}
      //  cout<<"idx: "<<idx<<" , "<<size<<"\n";
        if(size==n){
         //   cout<<"yes\n";
            ans.push_back(tmp);
            return ;
        }
        for (int i = 1; i <=n; ++i) {
            if((idx+i)>n){
             //   cout<<"oh";
                return;
            }
            
            string sub = s.substr(idx,i);
          //  cout<<"sub:"<<sub<<"\n";
            
            if(idx<n && size<=n&& isPlandrom(sub)){
                tmp.push_back(sub);
                backtrack(s,idx+i,size+i,ans,tmp);
                tmp.pop_back();
            }
            
        }
        
        
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> tmp;
        
        backtrack(s,0,0,ans,tmp);
        
        return ans;
    }
};