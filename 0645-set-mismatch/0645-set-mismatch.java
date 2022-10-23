class Solution {
    public int[] findErrorNums(int[] arr) {
    int[]A=new int[2];
    Set<Integer>set=new HashSet<>();
    int realsum=(arr.length*(arr.length+1))/2,arrsum=0,repeated=0;
    for (int i:arr){
        if(set.contains(i)){repeated=i;}
         set.add(i);
        arrsum+=i;
    }
    A[0]=repeated;
    A[1]=repeated+(realsum-arrsum);
return A;             

    }
}