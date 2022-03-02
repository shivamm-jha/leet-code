class Solution {
public:
    bool is_substr(string &s , string &t , int m , int n){
        if(m==0)return true;
        if(n==0) return false;
        
        if(s[m-1]==t[n-1]){
           return  is_substr(s,t,m-1,n-1);
        }
        else{
            return is_substr(s,t,m,n-1);
        }
    }
    bool isSubsequence(string s, string t) {
       
//         int k=0,j=0;
        
//         for(int i=0;i<t.size();i++){
//             if(t[i]==s[j]){
//                 k++;
//                 j++;
//             }
//         }
//         if(k==s.size())return true;
//         return false;
        
        if(is_substr(s,t,s.size(),t.size()))return true;
        return false;
    }
};


