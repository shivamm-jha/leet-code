class Solution {
public:
    int dp[601][101][101];
    int solve(int start, int m, int n, vector<string>&strs){
        if(start>=strs.size() || m<0 || n<0)return 0;
        if(m==0 && n==0) return 0;
        
        int i = start;
        if(dp[i][m][n]!=-1) return dp[i][m][n];
        int nzeros = count(strs[i].begin(),strs[i].end(),'0');
        int nones = strs[i].size()-nzeros;
        
        if(m>=nzeros && n>=nones){
            return dp[i][m][n] = max(1+solve(i+1,m-nzeros,n-nones,strs), solve(i+1,m,n,strs));
        }
        else return dp[i][m][n]=solve(i+1,m,n,strs);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        int res = solve(0,m,n,strs);
        return res;
    }
};



// int dp[601][101][101];
//     int findMaxForm(vector<string>& strs, int m, int n) {
//         memset(dp,-1,sizeof(dp));
        
//        return solve(0,m,n,strs.size(),strs);
//     }
//     int solve(int start,int m,int n,int size,vector<string>&strs){
//         if(start>=size || m<0 || n<0)
//             return 0;
//         if(m==0 && n==0)
//             return 0;
//         if(dp[start][m][n]!=-1)
//             return dp[start][m][n];
        
//         int i=start;
//         int zeroes=count(strs[i].begin(),strs[i].end(),'0');
//         int ones=strs[i].size()-zeroes;
//         if(m>=zeroes && n>=ones)
//             return dp[start][m][n]=max(1+solve(i+1,m-zeroes,n-ones,size,strs),solve(i+1,m,n,size,strs));
//         else
//             return dp[start][m][n]=solve(i+1,m,n,size,strs);
//     }
// };