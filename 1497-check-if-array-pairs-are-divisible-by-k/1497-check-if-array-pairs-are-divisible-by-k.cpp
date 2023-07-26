class Solution {
    
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>freq;

        for(int i = 0; i<n; i++){
            arr[i] = ((arr[i] % k) + k) % k;
            //cout<<arr[i]<<" , ";
            freq[arr[i]]++;
        }
        //cout<<"\n";
        
        if(freq.find(0)!=freq.end() && freq[0]%2==1){
            return 0;
        }
            
        for(int i=1;i<k;i++){
            if(freq.find(i)!=freq.end()){
               if(freq.find(k-i)==freq.end() || freq[i]!=freq[k-i]){
              // cout<<i<<" "<<k-i;
                   return 0;
           }  
        }
          
        }
        
        return 1;
    }
};