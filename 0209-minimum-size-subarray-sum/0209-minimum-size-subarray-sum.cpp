class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int start =0, end =0 , len = INT_MAX;
        
        int currSum =0;
        while(end < n){
            currSum+=nums[end];
            if(currSum>=target){
                while(currSum>=target){
                    currSum-=nums[start++];
                }
                
                len = min(len, (end-start)+2);
            }
            end++;
        }
        
        return len==INT_MAX ? 0 : len;
    }
};

