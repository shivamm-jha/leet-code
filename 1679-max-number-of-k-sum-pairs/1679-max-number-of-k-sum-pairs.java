class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        int l=0 , h= nums.length-1;
        int count =0;
        while(l<h){
            if(nums[l]+nums[h]==k){
                count++;
                l++;
                h--;
            }
            else if(nums[l]+nums[h]<k)l++;
            else h--;
        }
        return count;
    }
}