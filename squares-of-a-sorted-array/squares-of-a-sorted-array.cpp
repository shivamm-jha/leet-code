class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)v.push_back(pow(nums[i],2));
        sort(v.begin(),v.end());
        return v;
    }
};