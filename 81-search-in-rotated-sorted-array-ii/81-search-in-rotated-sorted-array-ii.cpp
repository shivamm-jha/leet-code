class Solution {
public:
    bool binary_search(vector<int> nums , int l ,int r,int key){
        int left=l,right=r;
        while(left<=right){
            int mid=(left+right)/2;
            //cout<<nums[mid]<<" ";
            if(nums[mid]==key)return true;
            else if(nums[mid]>key)right=mid-1;
            else left = mid+1;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==target)return true;
            else return false;
        }
        int pivot;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=i+1; break;
            }
        }
         //cout<<pivot;
        if(target>=nums[0] and target<=nums[pivot-1]){
             return binary_search(nums,0,pivot-1,target);
        }
       
        return binary_search(nums,pivot , n-1 , target);
    }
};