class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        
        while(low<high){
            int temp = nums[low]+nums[high];
            if(temp==target){
                return {low+1,high+1};
            }
            else if(temp<target){
                low++;
            }
            else high--;
        }
        return {};
    }
};