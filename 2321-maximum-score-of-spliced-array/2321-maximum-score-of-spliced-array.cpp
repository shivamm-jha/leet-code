class Solution {
public:
    int solve(vector<int>&nums1, vector<int> nums2){
        int sum =0;
       for(auto &it:nums1){
           sum+=it;
       }
        
        int currSum  = 0, maxi =0;
        for(int i=0;i<nums1.size();i++){
            currSum+=(nums2[i]-nums1[i]);
            if(currSum<0){
                currSum = 0;
            }
            maxi= max(maxi,currSum);
        }
        
        return sum+maxi;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
       return max(solve(nums1,nums2),solve(nums2,nums1));
    }
};