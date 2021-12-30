class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0)return -1;
        int num=0,len=1;
        for(int i=len;i<=k;i++){
            num=(num*10+1)%k;
            if(num==0)return len;
            len++;
        }
        return -1;
    }
};