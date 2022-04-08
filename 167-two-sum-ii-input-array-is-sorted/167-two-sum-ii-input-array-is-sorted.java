class Solution {
    public int isPossible(int[] nums, int target, int ele, int i){
        int start = i , end = nums.length-1;
        while(start<=end){
            int mid = start + (end- start)/2;
            if(nums[mid]+ ele == target){
                return mid;
            }
            else if(nums[mid]+ele> target){
                end = mid-1;
            }
            else start = mid+1;
        }
        return -1;
    }
    public  int[] ans(int[] nums , int target){
       
        int first=-1,second=-1;
        for(int i=0;i<nums.length-1;i++){
            int val = isPossible(nums,target,nums[i],i+1);
            if(val!=-1){
                first=i;
                second=val;
                break;
            }
        }
        int arr[]={first+1,second+1};
        return arr;
    }
    public int[] twoSum(int[] nums, int target) {
        int res[]=ans(nums,target);
        return res;
    }
}