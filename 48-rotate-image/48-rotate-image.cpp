class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        vector<vector<int>> cols;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            for(int j=0;j<nums[i].size();j++){
                temp.push_back(nums[j][i]);
            }
            reverse(temp.begin(),temp.end());
            cols.push_back(temp);
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=cols[i];
        }
    }
};