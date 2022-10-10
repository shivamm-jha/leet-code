class Solution {
public:
    
    bool solve(vector<int>& nums, int n){
        int currSum =0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(currSum+n<1)return false;
            
        }
        
        return true;
    }
    int minStartValue(vector<int>& nums) {
        
        
        int low = 1 , high = INT_MAX;
        int ans =0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(solve(nums,mid)){
                ans= mid;
                high = mid-1;
            }
            else low= mid+1;
        }
        
        
        return ans;
    }
};