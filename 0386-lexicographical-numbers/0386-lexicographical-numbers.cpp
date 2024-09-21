class Solution {
public:
void dfs(vector<int>&ans,string num,int n){
   // cout<<num<<"\n";
    if(num.size()>0&&std::stoi(num)<=n)
      ans.push_back(std::stoi(num));
     

    for(int i=0;i<=9;i++){
          if((i==0&&num.size()==0))
             continue;

          //cout<<num+to_string(i)<<"\n";
            string new_ = num+to_string(i);
            if(stoi(new_)<=n)  
              dfs(ans,num+to_string(i),n) ;     
    }
}
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        dfs(ans,"",n);
      return ans;
    }
};