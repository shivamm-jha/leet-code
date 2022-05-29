class Solution {
public:
   
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<vector<int>>dp(words.size(),vector<int>(26));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                dp[i][words[i][j]-'a']++;
            }
        }
        
        
        int ans = 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                bool common = false;
                for(int k=0;k<26;k++){
                    if(dp[i][k] > 0 && dp[j][k] >0){
                        common = true;
                    }
                }
                
                if(!common){
                    int size = words[i].size() * words[j].size();
                    ans = max(ans,size);
                }
            }
        }
        
        return ans;
        
    }
};


// int maxProduct(vector<string>& words) {
//         int ans=0;
//         vector<vector<int>>dp(words.size(),vector<int>(26));
//         for(int i=0;i<words.size();i++){
//             for(int j=0;j<words[i].size();j++){
//                 dp[i][words[i][j]-'a']++;
//             }
//         }
        
                    
//         for(int i=0;i<words.size();i++){
//             for(int j=i+1;j<words.size();j++)
//             {   bool common=true;
//                 for(int k=0;k<26;k++){
//                     if(dp[i][k]>0&&dp[j][k]>0){
//                         common=false;
//                     }
//                 }
//                 if(common){
//                     int cur=words[i].size()*words[j].size();
//                     ans=max(ans,cur);
//                 }
//             }
//         }
    
//         return ans;
//     }
// };