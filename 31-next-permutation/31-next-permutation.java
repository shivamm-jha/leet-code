class Solution {
    public void nextPermutation(int[] nums) {
        int first =  nums.length-1;
        while(first>=1 && nums[first-1] >= nums[first]){
            first--;
        }
        
        if(first==0){
            Arrays.sort(nums);
            return;
        }
        first--;
        int second =  nums.length-1;
        while(second> first && nums[second] <= nums[first]){
            second--;
        }
       
        swap(nums,first,second);
        reverse(nums,first+1);
        
    }
    
    public static void swap(int[] nums, int i , int j){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    
    public static void reverse(int[] nums, int i){
        int j=nums.length-1;
        while(i<j){
            swap(nums,i,j);
            i++;
            j--;
            
        }
        return;
    }
}