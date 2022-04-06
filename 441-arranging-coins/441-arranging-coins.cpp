class Solution {
public:
    int arrangeCoins(int n) {
        long long x = 8*(long long)n;
        long long ans1 = (-1 + sqrt(1+x))/2;
        long long ans2 = (-1 - sqrt(1+x))/2;
        if(ans1>0)return ans1;
        return ans2;
    }
};