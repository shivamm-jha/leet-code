class Solution {
public:
    
//      recurrsive code....
//     memoization will also give tle bcoz in worst case it can go upto N^2
  
    int solve(vector<int>&nums,int i , int j, int k){
       if(k==0) return 0 ;
        int profit =0;
        if(i<=j){
           int front = nums[i] + solve(nums,i+1,j,k-1);
           int back = nums[j] + solve(nums,i,j-1,k-1);
           profit = max(front,back);
        }
        return profit;
    }
    int maxScore(vector<int>& nums, int k) {
//         brute force gives tle...
        
        // int ans = solve(nums,0,nums.size()-1,k);
        // return ans;
        
        
//         approach is to find a subarray of length n-k which has minimum sum
//          and then subtract it from the total sum of array
        int n = nums.size();
        int totalSum =0;
        for(auto &it:nums){
            totalSum+=it;
        }
        if(n==k) return totalSum;
        
        int window = 0;
        for(int i=0;i<n-k-1;i++){
            window+=nums[i];
        }
        
        int ans=0;
        for(int i=n-k-1;i<n;i++){
            window += nums[i];
            ans = max(ans, totalSum - window);
            window -= nums[i-(n-k-1)];
        }
        
        return ans;
    }
};