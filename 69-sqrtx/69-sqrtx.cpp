class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        int low=1,right=x;
        int res;
        while(low<=right){
            int mid = low + (right-low)/2;
            if(mid==x/mid)return mid;
            else if(mid<x/mid){
                res= mid;
                low=mid+1;
            }
            else right=mid-1;
        }
        return res;
    }
};