class Solution {
public:
    int findMin(vector<int>& nums) {
//          if the array is not rotated or rotated n no. of times(means it came to original form)
        if(nums.size()==1) return nums[0];
        if(nums[0]<nums.back())return nums[0];
        int ans = INT_MAX;
        int start=0, end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>=nums[0]){
                start= mid+1;
            }
            else{
                ans= min(nums[mid],ans);
                end= mid-1;
            }
        }
        return ans;
        
    }
};