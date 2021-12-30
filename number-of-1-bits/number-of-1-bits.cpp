class Solution {
public:
    int hammingWeight(uint32_t n) {
        //return bitset<32>(n).count();
        
        int count=0,mask=1;
       while(n>0){
           if((n&mask)!=0)count++;
           n=n>>1;
       }
        return count;
    }
};