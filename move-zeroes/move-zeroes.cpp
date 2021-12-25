class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         brute force
//         space complexity 0(n)...... time complexity 0(n)
        
        
//         vector<int> v;
//         int count=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0)v.push_back(nums[i]);
//             else count++;
//         }
        
//         for(int i=0;i<count;i++){
//             v.push_back(0);
//         }
        
//         for(int i=0;i<n;i++){
//             nums[i]=v[i];
//         }
        
        
        
//         better solution 
        
//         space complxity 0(1) ..... time complexity 0(n)
        
        
        
//         int n=nums.size();
//         int last_nonzero=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 nums[last_nonzero++]=nums[i];
//             }
//         }
        
//         for(int i=last_nonzero;i<n;i++){
//             nums[i]=0;
//         }
        
        
         // stable_partition(nums.begin(), nums.end(), [](int n) {return n>0; });
        stable_partition(begin(nums),end(nums),[](int i){return i;});
    }
};