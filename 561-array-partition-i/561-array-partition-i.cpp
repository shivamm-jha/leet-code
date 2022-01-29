class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;
        while(i<n-1){
            ans+=min(nums[i],nums[i+1]);
            i+=2;
        }
        return ans;
    }
};