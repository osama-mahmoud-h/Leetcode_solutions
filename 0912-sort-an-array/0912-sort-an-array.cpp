class Solution {
public:
 void merge(vector<int>& nums,int p,int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
     
    vector<int>ar1(n1);
    vector<int>ar2(n2);
    //copy to ar1
    for (int i = p,j=0; i <=q ; ++i) {
        ar1[j++]=nums[i];
    }
   for (int i = q+1,j=0; i <=r ; ++i) {
       ar2[j++]=nums[i];

    }

    //merge
    int j=0,i=0,k=p;
    
    while (i<ar1.size()&&j<ar2.size()){
        if(ar1[i]<ar2[j]){
            nums[k++]=ar1[i++];
        } else{
            nums[k++]=ar2[j++];
        }
    }
    //if one of arrays have data
    while (j<ar2.size()){nums[k++]=ar2[j++];}
    while (i<ar1.size()){nums[k++]=ar1[i++];}

}
void mergeSort(vector<int>& nums,int l,int h){
    if(l<h){
        int mid = (l+h)/2;
        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,h);
        merge(nums,l,mid,h);
    }
}
vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
    mergeSort(nums,0,n-1);
    return nums;
}
};