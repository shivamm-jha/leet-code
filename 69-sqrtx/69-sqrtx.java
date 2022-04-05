class Solution {
    public long ans(int x){
        if(x==1) return 1;
        long ans = -1;
        long start = 0 , end = x;
        while(start<= end){
            long mid = start + (end-start)/2;
            if(mid*mid<=x){
                ans = mid;
                start = mid+1;
            }
            else end = mid-1;
        }
        return ans;
        
    }
    public int mySqrt(int x) {
        long res = ans(x);
        return (int)res;
    }
}