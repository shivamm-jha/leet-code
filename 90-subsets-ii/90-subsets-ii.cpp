class Solution {
public:
     vector<vector<int>> ans;
   set<vector<int>> st;
    void solve(vector<int> &nums, vector<int> &empty, int i){
        if(i==nums.size()){
            st.insert(empty);
           // ans.push_back(empty);
            return;
        }
//         pick
        empty.push_back(nums[i]);
        solve(nums,empty,i+1);
        empty.pop_back();
//         don't pick
        solve(nums,empty,i+1);
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int> empty;
        solve(nums,empty,0);
        for(auto &i:st){
            ans.push_back(i);
        }
        
        return ans;
    }
};