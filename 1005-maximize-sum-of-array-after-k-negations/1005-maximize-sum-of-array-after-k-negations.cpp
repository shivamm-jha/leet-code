class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,sum=0, n= nums.size();
        while(k>0 and i<n){
            if(nums[i]<0)nums[i]= - nums[i],k--;
            i++;
        }
        
        sort(nums.begin(),nums.end());
        if(k%2!=0)nums[0]=-nums[0];
         for(auto &i:nums)sum+=i;
        return sum;
    }
};