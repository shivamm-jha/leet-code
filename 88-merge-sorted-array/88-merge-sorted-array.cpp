class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//      brute force (n+m) * log(n+m)
//         for(int i=0;i<n;i++){
//             nums1[m++]=(nums2[i]);
//         }
        
//         sort(nums1.begin(),nums1.end());
        
        
        
//          T.C = 0(N+ M) , S.C = 0(N+M)
        
//         vector<int> dummy;
//         int i =0 , j =0;
//         while(i<m && j<n){
//             if(nums1[i]<=nums2[j]){
//                 dummy.push_back(nums1[i]);
//                 i++;
//             }
//             else dummy.push_back(nums2[j++]);
            
//         }
        
//         while(i<m){
//             dummy.push_back(nums1[i++]);
//         }
//         while(j<n){
//             dummy.push_back(nums2[j++]);
//         }
        
//         for(int i=0;i<dummy.size();i++){
//             nums1[i]=dummy[i];
//         }
        
        
        int idx1 = m-1;
        int idx2 = n-1;
        int i = n+m-1;
        while(idx1>=0 && idx2>=0){
            if(nums1[idx1] > nums2[idx2]){
                nums1[i--]=nums1[idx1--];
            }
            else nums1[i--]=nums2[idx2--];
        }
        
        while(idx2>=0){
            nums1[i--]=nums2[idx2--];
        }
       
        
    }
};