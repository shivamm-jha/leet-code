class Solution {
public:
    vector<int> findBall(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        vector<int> ans;
        
        for(int j=0;j<m;j++){
            int row = 0, col =j;
            while(row<n){
                if(nums[row][col]==1){
                    if(col+1>=m || nums[row][col+1]==-1){
                        ans.push_back(-1);
                        break;
                    }
                    col++;
                }
                else{
                    if(col-1<0 || nums[row][col-1]==1){
                        ans.push_back(-1);
                        break;
                    }
                    col--;
                }
                row++;
            }
            if(row==n){
                ans.push_back(col);

            }
        }
        
        return ans;
        
    }
};



