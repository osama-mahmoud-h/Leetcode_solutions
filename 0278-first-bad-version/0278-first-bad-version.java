/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {

        return bs(1,n);// [1 2 3 4 5 6 7 8]
    }
    int bs(int l,int h){
        if(l>h)
            return 0;
        int mid=l+(h-l)/2;
        if(isBadVersion(mid)&&!isBadVersion(mid-1)){
            return mid;
        }
        if(!isBadVersion(mid)){
            return bs(mid+1,h);
        }
        else{
            return bs(l,mid-1);
        }
    }
}