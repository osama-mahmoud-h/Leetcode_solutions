class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0 , n=height.size();
        stack<int>stk;

        for(int i=0;i<n;i++){
            if(height[i]==0){
                continue;
            }
            int st = height[i];
            while(i<n &&height[i]<=st){
                stk.push(height[i++]);
            }
            
            int end = 0;
             if(i>=n){
                 end = height[i-1];
             }else{
              end = height[i];
              i--;
             }
            //int mn = min(st,end);
           // cout<<st<<" , "<<end<<"\n";
           // cout<<mn<<"\n";
            //pop element from stack
            if(st<=end){
             while(stk.size()>1){
                ans+= st-stk.top();
               // cout<<stk.top()<<"   ";
                stk.pop();
            }stk.pop();
           // cout<<ans<<"\n";
            }
            else{//end < st
              int mx = stk.top();
              stk.pop();
              while(stk.size()>1){
                if(mx<stk.top()){
                    mx=stk.top();
                }else{
                    ans+= mx-stk.top();
                }
                stk.pop();
              }
                 
            }
           

        }
        return ans;
    }
};