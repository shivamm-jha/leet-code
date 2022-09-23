class Solution {
public:

    int mod = 1e9+7;
    int concatenatedBinary(int n) {
        int i=1;
        long num = 0;
        while(i<=n){
            num = ((num<< int(1+ (log2(i))))%mod  + i )%mod;
            i++;
        }
        return num;
    }
};