class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
         // o(nlogn)...
        
        
        // sort(nums.begin(),nums.end());
        // int l=0 , h= nums.size()-1;
        // int count =0;
        // while(l<h){
        //     if(nums[l]+nums[h]==k){
        //         count++;
        //         l++;
        //         h--;
        //     }
        //     else if(nums[l]+nums[h]<k)l++;
        //     else h--;
        // }
        // return count;
        
        int count =0;
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            if(umap.find(k-nums[i])!=umap.end()){
                count++;
                umap[k-nums[i]]--;
                if(umap[k-nums[i]]==0)umap.erase(k-nums[i]);
                
            }
            else umap[nums[i]]++;
        }
        return count;
    }
};