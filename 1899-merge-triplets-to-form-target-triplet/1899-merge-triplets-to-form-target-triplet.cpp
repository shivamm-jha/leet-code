class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& nums, vector<int>& target) {
        int n = nums.size();
        int x = target[0] , y = target[1] , z = target[2];
        
//         iterate through the vector and mark those rows as -1,-1,-1 where
//         nums[i][0] > target[0] or nums[i][1] > target[1] or nums[i][2] > target[2]
//         bcoz they won't be useful to us in getting target vector
        
        for(int i=0;i<n;++i){
            if(nums[i][0] > target[0] or nums[i][1] > target[1] or nums[i][2] > target[2]){
                nums[i]= vector<int>(3,-1);
            }
        }
        
        int a = 0 , b= 0 , c=0;
        for(int i=0;i<n;++i){
            a=max(a,nums[i][0]);
            b=max(b,nums[i][1]);
            c=max(c,nums[i][2]);
        }
        
        return a==target[0] && b==target[1] && c==target[2];
    }
};