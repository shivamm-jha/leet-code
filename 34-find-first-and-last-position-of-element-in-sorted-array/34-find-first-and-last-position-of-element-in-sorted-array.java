class Solution {
    public static int first(int[] nums, int target){
        int start = 0 , end = nums.length-1;
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid]> target){
                end = mid-1;
            }
            else start = mid+1;
        }
        return ans;
    }
                    
    public static int last(int[] nums, int target){
        int start = 0 , end = nums.length-1;
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                ans = mid;
                start=mid+1;
            }
            else if(nums[mid]> target){
                end = mid-1;
            }
            else start = mid+1;
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int num1 = first(nums,target);
        int num2 = last(nums,target);
        int [] ans = {num1, num2};
        return ans;
        
    }
}