class Solution {
public:
    // int count_bits(int n){
    //     int count=0,mask=1;
    //     while(n){
    //         count+=(mask & n);
    //         n = n>>1;
    //     }
    //     return count;
    // }
    vector<int> countBits(int n) {
        
//         time complexity 0(n logn)...
        
         //vector<int> ans;
        // for(int i=0;i<=n;i++){
        //     ans.push_back(count_bits(i));
        // }
        // return ans;
        
        
        
//        time complexity 0(n)
//         property : if you do i & i-1 it will erase the last set bit of i
//         for eg. 7 - 111 , 6-110 7&6=110;
//         so we already know no. of set bits in 0 is 0 
//         this will hep us to calculate the res. of the rest
        
        vector<int>ans(n+1,0);
        int count=0;
        for(int i=1;i<=n;i++){
            ans[i]= 1 + ans[i & (i-1)];
        }
        return ans;
        
        
        
         
    }
};