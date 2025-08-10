class Solution {
    public boolean reorderedPowerOf2(int N) {
        if (N==1) return true;
        if(N%2!=0) return false;
       return reorderedPowerOf2(N/2);
    }
}