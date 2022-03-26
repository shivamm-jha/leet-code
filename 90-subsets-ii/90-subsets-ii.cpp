class Solution {
public:
    vector<vector<int>> ans;
    // set<vector<int>> st;
//  time complexity 0(2^n * nlog(n) ) + 0(n) + 0(nlogn)   
    
    
    
//     void solve(vector<int> &nums, vector<int> &empty, int i){
//         if(i==nums.size()){
//             st.insert(empty);
           
//             return;
//         }
// //         pick
//         empty.push_back(nums[i]);
//         solve(nums,empty,i+1);
//         empty.pop_back();
// //         don't pick
//         solve(nums,empty,i+1);
        
        
//     }
    
//  better solution
    
    void solve(vector<int>&nums,vector<int>&empty,int idx){
        ans.push_back(empty);
        for(int i=idx;i<nums.size();i++ ){
            if(i>idx && nums[i]==nums[i-1])continue;
            
            empty.push_back(nums[i]);
            solve(nums,empty,i+1);
            empty.pop_back();
            
            
        }
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int> empty;
        // solve(nums,empty,0);
        // for(auto &i:st){
        //     ans.push_back(i);
        // }
        solve(nums,empty,0);
        
        return ans;
    }
};