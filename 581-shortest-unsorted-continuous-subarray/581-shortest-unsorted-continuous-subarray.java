class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int [] nums2 = new int[nums.length];
        System.arraycopy(nums,0,nums2,0,nums.length);
        Arrays.sort(nums2);
        
        int start =0, end =0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=nums2[i]){
                start = i; break;
            }
        }
        
        for(int i=nums.length-1;i>=0;i--){
            if(nums[i]!=nums2[i]){
                end = i; break;
            }
        }
        
        return (end-start==0? 0 : (end-start)+1);
    }
}