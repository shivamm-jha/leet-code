class Solution {
    public int peakIndexInMountainArray(int[] nums) {
//         time complexity 0(n)
        
        
        // for(int i=1;i<arr.length-1;i++){
        //     if(arr[i]> arr[i-1] && arr[i]>arr[i+1]){
        //         return i;
        //     }
        // }
        // return -1;
        
//         time complexity 0(logn)
        
        int start = 0 , end = nums.length-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]< nums[mid+1]){
                start = mid+1;
            }
            else end = mid;
        }
        return -1;
    }
}