class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
          int sum = 0;
        for(auto i:arr){
            sum+=i;
        }
        if(sum%3!=0&&sum!=0){
            return false;
        }
        
        int part = sum/3;
        
        sum = 0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==part&&cnt<3){
                cnt++;
                if(cnt<3)sum=0;
            }
        }
        
       // cout<<cnt<<"  "<<sum;
        return cnt==3&&sum==part;
    }
};