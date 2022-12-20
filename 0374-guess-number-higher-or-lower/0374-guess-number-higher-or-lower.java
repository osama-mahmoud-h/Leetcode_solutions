/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        
       if(guess(n)==1) return n;
        long low=1,high=n,mid=0;
        while(low<=high){
            mid =(low+high)/2;
            if(guess((int)mid)==-1){
                high=mid-1;
            }
            else if(guess((int)mid)==1){
                low =mid+1;
            }
            else if(guess((int)mid)==0)return (int)mid;
        }
        
        
      //  System.out.print(Integer.MAX_VALUE);
        
       return  n;
    }
}