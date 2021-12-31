class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //         brute force time complexity 0(nlogn)... space complexity 0(m+n)
        
        
//         vector<int> v;
//         for(int i=0;i<m;i++){
           
//             v.push_back(nums1[i]);
            
//         }
//         for(int i=0;i<n;i++){
            
//             v.push_back(nums2[i]);
//         }
      
//         for(int i=0;i<v.size();i++){
            
//             nums1[i]=v[i];
//         }
//         sort(nums1.begin(),nums1.end());
        
        
//         better solution time complexity 0(n)... space complexity 0(1)
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
