class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        
        int max_len=1;
        int start=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
               dp[i][i+1]=true;
                start=i;
                max_len=2;
            }
        }
       
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(dp[i+1][j-1] && s[i]==s[j]){
                    dp[i][j]=true;
                    if(k>max_len){
                        start=i;
                        max_len=k;
                    }
                }
            }
        }
        
        
        return s.substr(start,max_len);
    }
};