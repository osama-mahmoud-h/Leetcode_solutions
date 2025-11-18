class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        
         int i = 0;
        while (i < bits.length - 1) {
            i += bits[i] + 1;
        }
        return i == bits.length - 1;
    }
        // for(int i=0;i<bits.length;){
        //    if(bits[i]==0){
        //        if(i==bits.length-1)return true; 
        //        i++;
        //    }
        //     else i+=2;
        // }
        // return false;
        // }
}