class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
         int count=0;
        
//      time complexity 0(n4)... space complexity 0(1)   
        
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 for(int k=0;k<n;k++){
//                     for(int l=0;l<n;l++){
//                         if(nums1[i]+nums2[j]+nums3[k]+nums4[l]==0)count++;
//                     }
//                 }
//             }
//         }
        
//         return count;
        
        
//        time complexity :  0(n3)... space complexity: 0(n)
        
        
        // unordered_map<int,int> umap;
        // for(auto &i:nums1)umap[i]++;
        // for(auto &i:nums2){
        //     for(auto &j:nums3){
        //         for(auto &k:nums4){
        //             if(umap.find(-(i+j+k))!=umap.end())count+=umap[-(i+j+k)];
        //         }
        //     }
        // }
        // return count;
        
        
        unordered_map<int,int> umap;
        for(auto &i:nums1){
            for(auto &j:nums2){
                umap[i+j]++;
            }
        }
        
        for(auto &i:nums3){
            for(auto &j:nums4){
                if(umap.find(-(i+j))!=umap.end())count+=umap[-(i+j)];
            }
        }
        return count;
    }
};