class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         brtue fores solution time complexity 0(n2)
        int n=nums.size();
        int count=0;
        // for(int i=0;i<n;i++){
        //     int curr_sum=0;
        //     for(int j=i;j<n;j++){
        //         curr_sum+=nums[j];
        //         if(curr_sum==k)count++;
        //     }
        // }
        // return count;
        
//         better solution time complexity 0(n).... space complexity 0(n)
        
           unordered_map<int,int> umap;
        int curr_sum=0;
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            if(curr_sum==k)count++;
            if(umap.find(curr_sum-k)!=umap.end())count+=umap[curr_sum-k];
            umap[curr_sum]++;
        }
        return count;
    }
};