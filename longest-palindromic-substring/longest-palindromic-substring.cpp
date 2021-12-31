class Solution {
public:
    string longestPalindrome(string s) {
//         brute force..... time complexity 0(n3)
        
        // string ans="";
        // int max_len=0;
        // for(int i=0;i<s.size();i++){
        //     string res="";
        //     for(int j=i;j<s.size();j++){
        //         res+=s[j];
        //         int flag=1;
        //         for(int k=0;k<(j-i+1)/2;k++){
        //             if(s[i+k]!=s[j-k]){
        //                 flag=0; break;
        //             }
        //         }
        //         if(flag && (j-i+1)>max_len){
        //             ans=res; max_len=j-i+1;
        //         }
        //     }
        // }
        // return ans;
        
//         dp solution time complexity 0(n2)...space complexity 0(n2)

        
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