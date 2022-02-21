class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         time complexity 0(n2).... space complexity 0(1)..
        
         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int key = nums[i],count=0;
//             for(int j=0;j<n;j++){
//                 if(i!=j)count++;
//             }
//             if(count>n/2){
//                 return key;
//             }
//         }
        
//         return 1;
        
//         time complexity 0(n)... space complexity 0(n)
        
        
        // unordered_map<int,int> umap;
        // for(auto &i:nums)umap[i]++;
        // for(auto &i:umap){
        //     if(i.second > n/2){
        //         return i.first;
        //     }
        // }
        // return 1;
        
//         moore's voting algorithm....
        
        int count=1,ele=nums[0];
        int i=1;
        while(i<n){
            if(nums[i]==ele)count++;
            else{
                count--;
            }
            if(count<0){
                count=0;
                ele = nums[i];
            }
            i++;
            
        }
        
        return ele;
    }
};