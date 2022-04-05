class Solution {
    public static char ans(char[] nums , char target){
        int start =0, end = nums.length-1;
        char res=nums[0];
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>target){
                res = nums[mid];
                end = mid-1;
            }
            else if(nums[mid]<=target){
                start = mid+1;
            }
        }
        return res;
    }
    public char nextGreatestLetter(char[] nums, char target) {
        char res = ans(nums,target);
        return res;
    }
}