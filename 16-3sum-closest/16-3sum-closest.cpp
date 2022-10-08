class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
         
        int ans = 1e6;
         for(int i=0;i<nums.size()-2;i++){
             int first = nums[i];
             
             int l = i+1, r= nums.size()-1;
             while(l<r){
                 int sum = first + nums[l] + nums[r];
                 if(sum==target){
                     ans = sum;
                     return ans;
                 }
                 else if(sum < target){
                     if(abs(target-ans) > abs(target-sum)){
                         ans = sum;
                     }
                     l++;
                 }
                 else{
                     r--;
                     if(abs(target-ans) > abs(target-sum)){
                         ans = sum;
                     }
                 }
            }
         }
        
        return ans;
    }
};