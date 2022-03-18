class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
//         vector<int> v;
//         for(auto &i:nums){
//             if(i%2==0){
//                 v.push_back(i);
//             }
//         }
        
//         for(auto &i:nums){
//             if(i%2!=0){
//                 v.push_back(i);
//             }
//         }
        
//         return v;
        
        int i =0 , j=nums.size()-1;
        while(i<j){
            if(nums[i]%2==0){
                i++;
            }
            else if(nums[i]%2!=0){
                while(j>i && nums[j]%2!=0){
                    j--;
                }
                swap(nums[i],nums[j]);
            }
        }
        
        return nums;
    }
};