class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int currSum =0;
            for(int j=i;j<nums.size();j++){
                currSum+=nums[j];
                if(currSum>=target){
                    len = min(len , j-i+1);
                }
            }
        }
        return len==INT_MAX? 0 : len;
    }
};