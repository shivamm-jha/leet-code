class Solution {
public:
    int first_ocurr(vector<int> & nums, int target){
        int n=nums.size();
        int l=0,h=n-1;
        int ans=-1;
        while(l<=h){
            int mid= l + (h-l)/2;
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid]>target)h=mid-1;
            else{
                l=mid+1;
            }
        }
        
        return ans;
    }
    
    int last_ocurr(vector<int> & nums, int target){
        int n=nums.size();
        int l=0,h=n-1;
        int ans=-1;
        while(l<=h){
            int mid= l + (h-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)l=mid+1;
            else{
                h=mid-1;
            }
        }
        
        return ans;
    }
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=first_ocurr(nums,target);
        int b=last_ocurr(nums,target);
        vector<int> ans={a,b};
        return ans;
    }
};