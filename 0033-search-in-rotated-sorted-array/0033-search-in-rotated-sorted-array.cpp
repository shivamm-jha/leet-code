class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target)return mid;
            if(nums[0]<= nums[mid]){
                if(target>=nums[0] && target<=nums[mid]){
                    high = mid-1;
                }
                else low = mid+1;
            }
            
            else{
                if(target>=nums[mid] && target<= nums[nums.size()-1]){
                    low = mid+1;
                }
                else high= mid-1;
            }
        }
        
        return -1;
    }
};