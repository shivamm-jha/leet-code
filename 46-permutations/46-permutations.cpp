class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>&nums, vector<int>&empty,int freq[]){
        if(empty.size()==nums.size()){
            ans.push_back(empty);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                empty.push_back(nums[i]);
                freq[i]=1;
                solve(nums,empty,freq);
                freq[i]=0;
                empty.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int freq[n];
        for(int i=0;i<n;i++)freq[i]=0;
        vector<int> empty;
        solve(nums,empty,freq);
        return ans;
    }
};