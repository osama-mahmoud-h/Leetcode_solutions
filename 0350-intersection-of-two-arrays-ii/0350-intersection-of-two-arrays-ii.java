class Solution {
    public int[] intersect(int[] ar1, int[] ar2) {
       List<Integer> list=new ArrayList<>();
        Arrays.sort(ar1);
        Arrays.sort(ar2);
        int i=0,j=0;
        while (i<ar1.length&&j<ar2.length){
            if(ar1[i]==ar2[j])
            {list.add(ar1[i]);i++;j++;}
            else if(ar1[i]>ar2[j])j++;
            else i++;

        }
        int a[]=new int [list.size()];
        for (int k = 0; k < list.size(); k++) {
            a[k]=list.get(k);
        }
 return a;  
    }
}