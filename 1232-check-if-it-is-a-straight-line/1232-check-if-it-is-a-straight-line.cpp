class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& nums) {
        double y = nums[1][1] - nums[0][1];
        double x = nums[1][0] - nums[0][0];
        
        
        double slope = (double)y/(double)x;
        cout<<slope<<endl;
        
        for(int i=1;i<nums.size()-1;i++){
             double y1 = nums[i+1][1] - nums[i][1];
             double x1 = nums[i+1][0] - nums[i][0];
             double slope2 = (double)y1/(double)x1;
             if(slope!=slope2){
                 if((nums[i][0]==nums[i+1][0] && abs(nums[i][1])==abs(nums[i+1][1]))
                   || (abs(nums[i][0])==abs(nums[i+1][0]) && nums[i][1]==nums[i+1][1]))
                 {
                     continue;
                 }
                 else return false;
             }
        }
        return true;
        
    }
};