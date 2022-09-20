class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
//          gives tle bcoz total possible subarrays for an array of length n is n!
//         if(nums1==nums2)return nums1.size();
//         int ans = 0;
        int n = nums1.size();
        int m = nums2.size();
        
//         map<vector<int>, int> mp1;
//         for(int i=0;i<n;i++){
//             vector<int> v;
//             for(int j=i;j<n;j++){
//                 v.push_back(nums1[j]);
//                 mp1[v]++;
//             }
//         }
        
        
        
//         map<vector<int>, int> mp2;
//         for(int i=0;i<m;i++){
//             vector<int> v;
//             for(int j=i;j<m;j++){
//                 v.push_back(nums2[j]);
//                 mp2[v]++;
//             }
//         }
        
        
        
//         for(auto &it: mp1){
//             if(mp2.find(it.first)!=mp2.end()){
//                 ans= max((int)ans, (int)it.first.size());
//             }
//         }
        
//         return ans;
        int ans =0;
        int dp[n+1][m+1];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)dp[i][j]=0;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(nums1[i-1]==nums2[j-1]){
                    dp[i][j]= 1+ dp[i-1][j-1];
                    ans= max(ans,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        
        
        return ans;
        
    }
};