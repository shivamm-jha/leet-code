class Solution {
public:
    vector<vector<int>> ans;
    void subset(vector<int> & nums, vector<int> empty, int idx , int target ){
        if(target==0){
            ans.push_back(empty);
            return;
        }  
        for(int i = idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])continue;
            if(nums[i]>target)break;
            empty.push_back(nums[i]);
            subset(nums,empty,i+1,target-nums[i]);
            empty.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> empty;
        subset(nums,empty,0,target);
        return ans;
    }
};