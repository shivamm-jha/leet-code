class Solution {
public:
    
    int result(int n){
        if(n==1) return 1;
        if(n==0) return 0;
        
        int last = result(n-1);
        int secondLast = result(n-2);
        
        return last + secondLast;
    }
    
    int fib(int n) {
        // int first=0,second=1,last;
        // while(n--){
        //     last=first+second;
        //     first=second;
        //     second=last;
        // }
        // return first;
        
       return  result(n);
    }
};