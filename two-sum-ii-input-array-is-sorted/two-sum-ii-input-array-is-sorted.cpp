class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v;
        int i=0,j=n-1;
        while(i<j){
            if(nums[i]+nums[j]==target){v={i+1,j+1}; break;}
            else if(nums[i]+nums[j]>target)j--;
            else i++;
        }
        
        return v;
    }
};