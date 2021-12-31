class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         vector<int> v;
//         for(int i=0;i<m;i++){
//             if(nums1[i]!=0){
//             v.push_back(nums1[i]);
//             }
//         }
//         for(int i=0;i<n;i++){
//              if(nums2[i]!=0)
//             v.push_back(nums2[i]);
//         }
//         //sort(v.begin(),v.end());
//         for(int i=0;i<v.size();i++){
            
//             nums1[i]=v[i];
//         }
//         sort(nums1.begin(),nums1.end());
        
       int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        
        while(i>=0){
             nums1[k--]=nums1[i--];
        }
        while(j>=0){
             nums1[k--]=nums2[j--];
        }
        
    }
};