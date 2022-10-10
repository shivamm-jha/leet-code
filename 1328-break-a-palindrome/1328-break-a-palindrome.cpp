class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.size();
        if(n==1)return "";
        int flag=0;
        
        for(int i=0;i<n/2;i++){
            if(s[i]!='a'){
                s[i]='a';
                flag=1; break;
            }
            
        }
        
        
        if(!flag){
            if(n%2==0){
                for(int i=n/2;i<n;i++){
                if(s[i]!='a'){
                    s[i]='a';
                    flag=1; break;
                }
            }
            }
            else {
                for(int i=n/2+1;i<n;i++){
                if(s[i]!='a'){
                    s[i]='a';
                    flag=1; break;
                }
            }
            }
        }
        
        
        if(!flag){
            s[n-1]= s[0]+1;
        }
        
        
        
       
        
        return s;
    }
};