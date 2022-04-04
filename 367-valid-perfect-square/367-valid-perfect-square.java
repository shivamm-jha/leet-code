class Solution {
    public boolean isPerfectSquare(int num) {
        if(num==1) return true;
        int start = 1 , end = num;
        while(start<=end){
            int mid = start + (end- start)/2;
            if (Integer.MAX_VALUE / mid < mid) {
                end = mid - 1;
                continue;
            }
            if(mid*mid==num)return true;
            else if(mid*mid> num){
                end = mid-1;
            }
            else start = mid+1;
        }
        return false;
    }
}