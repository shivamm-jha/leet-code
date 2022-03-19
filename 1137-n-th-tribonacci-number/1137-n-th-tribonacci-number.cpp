class Solution {
public:
    
    map<int,int> mp;
    
    int result(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
        
        int nMinusOneThTerm = result (n-1);
        int nMinusTwoThTerm = result(n-2);
        int nMinusThreeThTerm = result(n-3);
        int key = nMinusOneThTerm + nMinusTwoThTerm + nMinusThreeThTerm;
        mp[n]=key;
        return nMinusOneThTerm + nMinusTwoThTerm + nMinusThreeThTerm;
    }
    
    int tribonacci(int n) {
        // if (n < 2) return n;
        // int a = 0, b = 1, c = 1, d = a + b + c;
        // while (n-- > 2) {
        //     d = a + b + c, a = b, b = c, c = d;
        // }
        // return c;
        
        return result(n);
    }
};