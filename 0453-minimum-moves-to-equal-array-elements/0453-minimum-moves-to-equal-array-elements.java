class Solution {
    public int minMoves(int[] nums) {
      int min = Arrays.stream(nums)
                    .min()
                    .getAsInt();

       return Arrays.stream(nums)
                    .reduce(0, (sum, cur) -> sum + Math.abs(cur- min));              
    }
}

/**

(subtotal, element) -> subtotal + element);

   Arrays.sort(nums);
       
        int med = n%2 == 0 ? ( nums[(n-1)/2] + nums[n/2])/2 :  nums[n/2];
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans += Math.abs(med - nums[i]);
        }
        return ans;

[1,5,5,5]
[2,6,6,5] 
[3,6,7,6]
[4,7,7,7]
[5,8,8,7]
[6,8,8,8]
[7,9,9,8]
[8,9,9,10]
[9,10,10,10]
[10, 11, 11, 10]
[11,11,12,11]
[12,12,12,12]




[1,3,3]
[2,4,3]
[3,4,4]
[4,5,4]
[5,5,5]


[1,2,3]
[2,3,3]
[3,4,3]
[4,4,4]
 */