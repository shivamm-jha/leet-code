class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[k] > nums[j] && nums[j] > nums[i])return true;
//                 }
//             }
//         }
        
//         return false;
        
        
//          T.C = 0(N^2)
        
        if(n<3)return false;
        
        
//         int min_ele = nums[0];
//         for(int i=0;i<n;i++){
//             min_ele = min(min_ele, nums[i]);
//             for(int j=i+1;j<n;j++){
//                 if(min_ele< nums[i] && nums[i] < nums[j])return true;
//             }
//         }
        
    
//         return false;
        
        int min_ele1= nums[0], min_ele2=INT_MAX;
        for(int i=0;i<n;i++){
            min_ele1= min(min_ele1,nums[i]);
            if(nums[i] > min_ele1 && nums[i]<min_ele2)min_ele2= nums[i];
            if(min_ele1 < min_ele2 && min_ele2 < nums[i]){
                return true;
            }
        }
        
        return false;
    }
};