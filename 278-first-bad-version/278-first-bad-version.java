/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public  int ans(int n){
        int start = 0 , end = n;
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                ans= mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
    public int firstBadVersion(int n) {
        int result = ans(n);
        return result;
    }
}