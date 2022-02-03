class Solution {
public:
   
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        vector<int> left ;
        left.push_back(nums[0]);
        for(int i=1;i<n;i++){
            left.push_back(min(left[i-1],nums[i-1]));
        }
        vector<int> right(n,0);
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i+1]);
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>left[i] and nums[i]<right[i])return true;
        }
        return false;
        
    }
};