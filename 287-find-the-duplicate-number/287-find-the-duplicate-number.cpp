class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         brute force time complexity 0(n) .. space complexity 0(n)
        
        
       // unordered_map<int,int> umap;
       //  for(auto &i:nums){
       //      if(umap.find(i)!=umap.end())return i;
       //      else umap[i]++;
       //  }
       //  return 1;
        
//     time complexity 0(n^2) space complexity 0(1)
        
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j && nums[i]==nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return 1;
        
        
//         if the array is mutable
        
        // for(int i=0;i<nums.size();i++){
        //     int index = abs(nums[i])-1;
        //     nums[index]*=-1;
        //     if(nums[index]>0) return abs(nums[i]);
        // }
        // return -1;
        
        
//         if the array is mutable
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow= nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        
        fast = nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast = nums[fast];
        }
        
        return slow;
        
    }
};
 