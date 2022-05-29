class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         if(nums.size()<=2)return ans;
//         set<vector<int>> st;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-2;i++){
//             int j = i+1;
//             int k=nums.size()-1;
//             while(j<k){
//                 int val = nums[i]+nums[j]+nums[k];
//                 if(val==0){
//                     st.insert({nums[i],nums[j],nums[k]});
//                     j++;
//                     k--;
//                 }
//                 else if(val<0){
//                     j++;
//                 }
//                 else k--;
//             }
//         }
        
        
//         for(auto &it:st){
//             ans.push_back(it);
//         }
//         return ans;
        
        
//         best solution T.C = 0(N^2), S.C= 0(1)
        
        vector<vector<int>> ans;
        int  n = nums.size();
        if(n<=2) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int l = i+1;
                int r= n-1;
                while(l<r){
                    int val = nums[i]+nums[l]+nums[r];
                    if(val==0){
                        ans.push_back({nums[i],nums[l],nums[r]});
                        while(l<r && nums[l]==nums[l+1])l++;
                        while(l<r && nums[r]==nums[r-1])r--;
                        l++; r--;
                    }
                    else if(val<0)l++;
                    else r--;
                }
            } 
        }
        return ans;
    }
};

