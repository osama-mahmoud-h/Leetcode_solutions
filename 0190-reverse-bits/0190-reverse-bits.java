public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
         int answer = 0; // initializing answer
        for (int i = 0; i < 32; i++) { // 32 bit integers
            answer <<= 1; // shifts answer over 1 to open a space
            answer |= ((n >> i) & 1); // inserts bits from n
        }
        return answer;
        
//         int []ans=new int[32];
//         for(int i=ans.length-1;i>=0;i--){
//             ans[i]=n&1;
//             n=n>>>1;
//         }
        
//                  long sum=0;
//                 for(int i=0;i<ans.length;i++){
//                     sum+=(long)ans[i]*Math.pow(2,i);
//                 }
//         return (int )sum;
        ///////////////////////////////////////////////
    //      int res=0;
    // for(int i=0;i<32;i++){
    // 	res= ( res << 1 ) | ( n & 1 );         
    // 	n = n >> 1;                  
    // }
    // return res;

        
//        // int size=bits.length();
//         StringBuilder sb=new StringBuilder();
//         sb.append(  Integer.toBinaryString(n));
        
//         sb.reverse();
        
//         while(sb.length()<32){
//             sb.append('0');
//         }
//         sb.reverse();
       
//         long sum=0;
        
//         int i=0;
//         String bit=sb.toString();
//         for(char c:bit.toCharArray()){
//            sum+=(long)(c-48) *(long)Math.pow(2,i);
//             i++;
//         }
//         return (int) sum;
    }
}