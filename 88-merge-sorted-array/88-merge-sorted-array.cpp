class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//      brute force (n+m) * log(n+m)
//         for(int i=0;i<n;i++){
//             nums1[m++]=(nums2[i]);
//         }
        
//         sort(nums1.begin(),nums1.end());
        
        vector<int> dummy;
        int i =0 , j =0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                dummy.push_back(nums1[i]);
                i++;
            }
            else dummy.push_back(nums2[j++]);
            
        }
        
        while(i<m){
            dummy.push_back(nums1[i++]);
        }
        while(j<n){
            dummy.push_back(nums2[j++]);
        }
        
        for(int i=0;i<dummy.size();i++){
            nums1[i]=dummy[i];
        }
        
    }
};