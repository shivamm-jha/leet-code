class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int i =0;
        int j = 0;
        int n = nums.length;
        for(int k=0;k<nums.length;k++){
            if(nums[k]%2==0){
                swap(nums,i,k);
                i++;
            }
        }
        
        return nums;
    }
    
    public static void swap(int nums[],int i, int j){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
}