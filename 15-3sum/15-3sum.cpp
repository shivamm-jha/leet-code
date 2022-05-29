class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<=2)return ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j = i+1;
            int k=nums.size()-1;
            while(j<k){
                int val = nums[i]+nums[j]+nums[k];
                if(val==0){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(val<0){
                    j++;
                }
                else k--;
            }
        }
        
        
        for(auto &it:st){
            ans.push_back(it);
        }
        return ans;
    }
};