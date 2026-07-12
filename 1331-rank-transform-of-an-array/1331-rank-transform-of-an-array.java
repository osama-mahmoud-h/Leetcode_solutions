class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int []temp = arr.clone();
     
        if(arr.length==0)return arr;
   
        Arrays.sort(temp);
       
        Map<Integer,Integer>map=new HashMap<>();
        int rank=1;
        map.put(temp[0],rank);

        for (int i = 1; i <arr.length ; i++) {
            if(!map.containsKey(temp[i]))
           {
                rank++;
                map.put(temp[i],rank);
            }


        }

        for (int i = 0; i <arr.length ; i++) {
            arr[i]=map.get(arr[i]);

        }
        return arr;
    }
}