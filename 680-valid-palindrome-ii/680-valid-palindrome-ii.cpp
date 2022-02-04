class Solution {
public:
    bool ispalindrome(string s){
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j])return false;
            i++; j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
       
        
        int n=s.size();
       
        
    int first=-1,second=-1;
        int i=0,j=n-1;
        while(i<j){
           if(s[i]!=s[j]){
               first=i,second=j; break;
           }
            i++; j--;
        }
        if(first==-1 and second==-1)return true;
        
        string ans1="",ans2="";
        ans1+=s,ans2+=s;
        ans1.erase(ans1.begin()+first),ans2.erase(ans2.begin()+second);
        //cout<<ans1<<endl<<ans2<<endl;
        if(ispalindrome(ans1))return true;
        if(ispalindrome(ans2))return true;
        return false;
        
        
        
    }
};