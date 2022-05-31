class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int currSum = 0;
        //     for(int j=i;j<n;j++){
        //         currSum+=nums[j];
        //         if(currSum==k)count++;
        //     }
        // }
        // return count;
        
        unordered_map<int,int> umap;
        int prefixSum = 0;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            if(prefixSum==k)count++;
            if(umap.find(prefixSum-k)!=umap.end()){
                count+=umap[prefixSum-k];
            }
            
            umap[prefixSum]++;
            
        }
        return count;
        
    }
};