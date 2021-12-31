class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int curr_sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            v.push_back(curr_sum);
        }
        return v;
    }
};