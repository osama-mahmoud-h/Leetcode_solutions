class Solution {
    public String maxSumOfSquares(int num, int sum) {
        StringBuilder sb = new StringBuilder();
        while (sum > 0 || num > 0) {
            int digit = Math.min(9, sum);
            sb.append(digit);
            sum -= digit;
            num--;
            if(num <=0 && sum > 0) {
                return "";
            }       
        }
        return sb.toString();
    }
}