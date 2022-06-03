class Solution {
public:
    set<vector<int>> st;
    void solve(vector<int> & nums, int i , vector<int>&empty){
        if(i>= nums.size()){
            st.insert(empty);
            return;
        }
        
//          pick
        if(empty.size()>=1){
            if(empty.back() <= nums[i]){
                 empty.push_back(nums[i]);
                 solve(nums,i+1,empty);
                 empty.pop_back();
                
                solve(nums,i+1,empty);
            }
            else{
                solve(nums,i+1,empty);
            }
        }
        
        if(empty.size()==0){
//              pick
            empty.push_back(nums[i]);
            solve(nums,i+1,empty);
            empty.pop_back();
            
//              don't pick
            solve(nums,i+1,empty);
        }
        
       
        

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> empty;
        solve(nums,0,empty);
        for(auto &it: st){
            if(it.size()>=2){
                ans.push_back(it);
            }
        }
        return ans;
    }
};