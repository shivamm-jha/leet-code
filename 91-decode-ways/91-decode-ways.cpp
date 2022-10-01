class Solution {
public:
    int dp[101];
    int solve(int i, string &s){
       if(i==s.size()) return 1;
        
        int ans =0;
        
        int op1 = s[i]-'0', op2=0;
        if(s[i]=='0')return 0;
        if(dp[i]!=-1)return dp[i];
        
        if(op1>=1){
            ans+=solve(i+1,s);
        }
        
        if(i<s.size()-1){
            op2= op1 *10 + (s[i+1]-'0');
            if(op2>0 && op2<=26)ans+=solve(i+2,s);
            
        }
        
        return dp[i] = ans;
        
    }
    
    int numDecodings(string s) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,s);
    }
};