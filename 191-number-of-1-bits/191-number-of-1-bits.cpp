class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0,mask=1;
        while(n){
            if(n&mask!=0)count++;
            n= n>>1;
        }
        return count;
        
    }
};