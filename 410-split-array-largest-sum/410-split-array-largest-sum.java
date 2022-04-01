class Solution {
    public boolean isPossible(int [] nums , int mid , int m){
        int count = 1, sum =0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(sum>mid){
                sum=nums[i];
                count++;
            }
            if(count>m) return false;
        }
        return true;
    }
    public int splitArray(int[] nums, int m) {
        int max_ele = -1, total = 0;
        for(int i=0;i<nums.length;i++){
            total+=nums[i];
            max_ele = Math.max(max_ele,nums[i]);
        }
        
        int start = max_ele , end = total;
        int ans =-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isPossible(nums,mid,m)){
                ans=mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
}