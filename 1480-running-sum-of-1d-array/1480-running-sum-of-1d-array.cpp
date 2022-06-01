class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int curr =0;
        for(auto &it:nums){
            curr+=it;
            ans.push_back(curr);
        }
        return ans;
    }
};