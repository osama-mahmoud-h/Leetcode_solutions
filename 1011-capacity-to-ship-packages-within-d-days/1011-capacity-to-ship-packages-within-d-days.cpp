class Solution {
public:
   int days_needed(vector<int>& weights,int capacity){
    int sum=0;
    int days = 0;
    for (int i = 0; i < weights.size(); ++i) {
        if(weights[i]>capacity){
            return 1e8;
        }
        if((sum+weights[i])<=capacity ){
            sum+=weights[i];
        }else{
            sum = weights[i];
            days++;
        }
    }
    if(sum>0)days++;

    return days;

}
int shipWithinDays(vector<int>& weights, int days) {
    int sum=0;
    for(auto i:weights){
        sum+=i;
    }
//cout<< days_needed(weights,14)<<"\n";
    int max_capacity = sum;
    int low =1,heigh = sum;
    while (low<heigh){
        int mid =(low+heigh)/2;
        int days_ = days_needed(weights,mid);
       //cout<<mid<<" -- "<<days_<<"\n";
        if(days_<=days){
            heigh = mid;
            max_capacity = mid;
        }
        else{
            low = mid+1;
        }
        
    }
    return max_capacity; 
}
};