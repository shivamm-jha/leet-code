class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size()<=1) return true;
        int dipIdx = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                dipIdx = i; break;
            }
        }
//          first way..
        int t;
        if(dipIdx == 0){
            t = nums[dipIdx];
            nums[dipIdx]=nums[dipIdx+1];
        }
        else{
            t=nums[dipIdx];
            nums[dipIdx]=nums[dipIdx-1];
        }
        
        if(is_sorted(nums.begin(),nums.end()))return true;
        
//         2nd way
        
        nums[dipIdx]=t;  // reverting back changes
        
        nums[dipIdx+1] = nums[dipIdx];
        
        if(is_sorted(nums.begin(),nums.end()))return true;
        return false;
    }
};