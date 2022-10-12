class Solution {
public:
    bool isPossible(int a, int b, int c){
        if(a+b >c && b+c > a && a+c > b)return true;
        return false;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        
        int ans= 0;
        for(int i=0;i<nums.size()-2;i++){
            if(isPossible(nums[i],nums[i+1],nums[i+2])){
                ans = max(ans, nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return ans;
    }
};