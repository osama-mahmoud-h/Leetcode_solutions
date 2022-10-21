class Solution {
    public boolean containsNearbyDuplicate(int[] arr, int k) {
         Map<Integer,Integer>map=new HashMap<>();
        for (int i = 0; i <arr.length ; i++) {
            if(map.containsKey(arr[i])){
                map.put(arr[i],i-map.get(arr[i]));

                if(map.get(arr[i])<=k)return true;
            }
           else map.put(arr[i],i);
        }
      return false; 
    }
}