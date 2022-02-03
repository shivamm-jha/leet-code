class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> st;
//         for(int i=0;i<n-3;i++){
//             for(int j=i+1;j<n-2;j++){
//                 for(int k=j+1;k<n-1;k++){
//                     for(int l=k+1;l<n;l++){
//                         if(nums[i]+nums[j]+nums[k]+nums[l]==target){
//                             vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
//                             st.insert(temp);
//                         }
//                     }
//                 }
//             }
//         }
        
//         for(auto &i:st){
//             ans.push_back(i);
//         }
        
//         return ans;
        
        sort(nums.begin(),nums.end());
        long long first,second;
        for(int i=0;i<n-3;i++){
            first=nums[i];
            for(int j=i+1;j<n-2;j++){
                second=nums[j];
                int start= j+1,end=n-1;
                while(start<end){
                    long long sum = first+second+nums[start]+nums[end];
                    if(sum==(long long)target){
                        vector<int> temp={(int)first,(int)second,nums[start],nums[end]};
                        st.insert(temp);
                        start++;
                    }
                    else if(sum>(long long)target)end--;
                    else start++;
                }
            }
        }
        
        for(auto &i:st){
            ans.push_back(i);
        }
        
        return ans;
        
    }
};