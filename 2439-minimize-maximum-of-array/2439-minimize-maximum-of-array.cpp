class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long maxi = 0;
        long long sum =0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi = max(maxi, (sum+i)/(i+1));
        }
        
        return (int)maxi;
    }
};