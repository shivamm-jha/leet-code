class Solution {
    public int search(int[] nums, int target) {
        int n = nums.length;
        int idx = minIndex(nums); 
        System.out.println(idx);
        int res1=-1, res2=-1;
        if(idx>=1) res1 = binarySearch(nums,0,idx-1,target);
        res2 = binarySearch(nums,idx,n-1,target);
        return res1==-1 ? res2 : res1;
        
    }
    
    public int binarySearch(int[] nums , int low , int high, int target){
        while(low<=high){
            int m= (low+high)/2;
            if(nums[m]==target)return m;
            else if(nums[m]>target) high= m-1;
            else low= m+1;
        }
        return -1;
    }
    
    public int minIndex(int[] nums){
        int low= 0 , high = nums.length-1;
//          two base cases
        if(low==high) return low;
        if(nums[low]< nums[high])return low;
        
        int ans = Integer.MAX_VALUE;
        int res = -1;
        while(low<=high){
            int m = (low+high)/2;
            if(nums[m]>=nums[0]){
                low = m+1;
            }
            else{
                if(nums[m]<ans){
                    ans=nums[m];
                    res=m;
                }
                
                high = m-1;
                
            }
        }
        return res;
    }
}