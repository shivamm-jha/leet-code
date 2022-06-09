class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum =0;
        for(auto &it:nums){
            sum+=it;
        }
        int temp=0;
        vector<int> ans;
        for(auto &it:nums){
            if(temp<=sum){
                temp+=it;
                sum-=it;
                ans.push_back(it);
            }
            else break;
            
        }
    
        return ans;
    }
};