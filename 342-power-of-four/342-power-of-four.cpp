class Solution {
public:
    
    bool isPowerOfFour(int n) {
        
        if(n==1)return true;
        if(n<4)return false;
        double num = log(n)/log(4);
        if(num - ceil(num)==0)return true;
        return false;
    }
};