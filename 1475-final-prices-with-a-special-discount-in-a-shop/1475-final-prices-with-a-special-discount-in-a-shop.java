class Solution {
    public int  mini(int []arr,int indx,int current){
        if(arr.length-1==indx)return 0;
        for(int i=indx+1;i<arr.length;i++){
            if(arr[i]<=current)return arr[i];
        }
        return 0;
    }
    public int[] finalPrices(int[] arr) {
        
        for(int i=0;i<arr.length-1;i++)
        {
            arr[i]=arr[i]-mini(arr,i,arr[i]);
        }
        return arr;
    }
}