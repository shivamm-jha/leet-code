class Solution {
public:
    int dp[101][101];
    bool solve(string &s1, string &s2, string &s3, int l1, int l2, int l3){
        if(l1<0 && l2<0 && l3<0)return true;
        if(l1>=0&&l2>=0 &&dp[l1][l2]!=-1)return dp[l1][l2];
        if(l1>=0 && s1[l1]==s3[l3] && l2>=0 && s2[l2]==s3[l3]){
            return dp[l1][l2]=solve(s1,s2,s3,l1-1,l2,l3-1) || solve(s1,s2,s3,l1,l2-1,l3-1);
        }
        else if(l1>=0 && s1[l1]==s3[l3]){
            return solve(s1,s2,s3,l1-1,l2,l3-1);
            
        }
        else if(l2>=0 && s2[l2]==s3[l3]){
            return solve(s1,s2,s3,l1,l2-1,l3-1);
        }
        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s3.size() != s1.size() + s2.size())
			return false;
        memset(dp,-1,sizeof(dp));
        int l1=s1.size()-1;
        int l2 = s2.size()-1;
        int l3=s3.size()-1;
        return solve(s1,s2,s3,l1,l2,l3);
    }
};

