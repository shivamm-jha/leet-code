class Solution {
public:
    int fib(int n) {
        int first=0,second=1,last;
        while(n--){
            last=first+second;
            first=second;
            second=last;
        }
        return first;
    }
};