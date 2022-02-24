class Solution {
public:
    
    bool isUgly(int n) {
        if(n<=0) return false;
//      this soln.. gives tle   
        
        
        
//         int i=2;
//         vector<int> v;
//         while(n && i<=n ){
//             if(n%i==0){
//                 v.push_back(i);
//                 n/=i;
//             }
//             else i++;
//         }
        
//         for(int i=0;i<v.size();i++){
//             if(v[i]!=2 && v[i]!=3 && v[i]!=5)return false;
//         }
//         return true;
        
        while(n>1){
            if(n%2==0)n/=2;
            else if(n%3==0)n/=3;
            else if(n%5==0)n/=5;
            else return false;
        }
        return true;
        
//         if(n<=0) return false;
//     while(n>1){
//         if(n%2==0)
//             n=n/2;
//         else if(n%3==0)
//             n=n/3;
//         else if(n%5==0)
//             n=n/5;
//         else return false;
    
//     }
//     return true;  
    }
};

