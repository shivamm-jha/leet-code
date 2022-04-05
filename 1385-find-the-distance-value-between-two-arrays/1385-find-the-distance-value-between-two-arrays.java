class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
       
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0;i<arr1.length;i++){
            if(nums(arr2,arr1[i],d)){
                count++;
            }
        }
        
        return count;
    }
    
    public static boolean nums(int [] nums , int ele, int d){
        int start = 0 , end = nums.length-1;
       
        while(start<=end){
            int mid = start +(end- start)/2;
            if(Math.abs( nums[mid]-ele) <= d){
                return false;
            }
            else if(nums[mid] < ele){
                start = mid+1;
            }
            else end = mid-1;
        }
        
        return true;
    }
}


// int low = 0, high = arr.size() - 1;
//         while(low <= high){
            
//             int mid = low + (high - low)/2;
//             if(abs(arr[mid] - target) <= d){
//                 return false;
//             }
//             else if(arr[mid] < target){
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
            
//         }
//         return true;