class Solution {

typedef pair<int, int> P;
typedef array<int,3>arr;
class ComparisonClass {
public:
    bool operator() (arr a,arr b) {
        if(a[1]==b[1])
            return a[2] > b[2];
        return a[1] > b[1];
    }
};
    
public:
   


static bool cmp_(arr v1, arr v2){
    if(v1[0]==v2[0]){
        return v1[1]<v2[1] ;
    }
    return v1[0] < v2[0];
}
 vector<int> getOrder(vector<vector<int>>& tasks) {
    int n=tasks.size();
    priority_queue<arr,vector<arr>, ComparisonClass >pq;
    vector<arr>tmp(n);
     
     int i=0;
     for(auto vc:tasks){
         tmp[i]={vc[0],vc[1],i};
         i++;
     }

     sort(tmp.begin(), tmp.end(),cmp_);

     long long int time = tmp[0][0];
     i=1;
     vector<int>ans;
     pq.push({tmp[0][0],tmp[0][1],tmp[0][2]});
       
   
    while (pq.size()){
        arr cur_task = pq.top();
         pq.pop();
        
         time+=cur_task[1];
        
        if(i<n&&pq.empty()&&time<tmp[i][0]){
            time=tmp[i][0];
        }
     
         ans.push_back(cur_task[2]);
         while((i<n && time>=tmp[i][0])){
             pq.push({tmp[i][0],tmp[i][1],tmp[i][2]});
             i++;
         }
     }
        return ans;
    }


};