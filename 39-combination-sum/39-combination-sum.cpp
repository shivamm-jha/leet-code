class Solution {
public:
    vector<vector<int>> ans;
    void combinations(vector<int> & nums, int i , int target , vector<int> & v){
        if(i==nums.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        
//         pick the ele...
        if(target>= nums[i]){
            v.push_back(nums[i]);
            combinations(nums,i,target-nums[i],v);
            v.pop_back();
        }
        
//          don't tpick
        
        combinations(nums,i+1,target,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> vec;
        combinations(candidates, 0 , target , vec);
        return ans;
    }
};