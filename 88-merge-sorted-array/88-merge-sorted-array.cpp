class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//          Nlog N approach
        // int i=m, j=0;
        // while(j<n){
        //     nums1[i++]=nums2[j++];
        // }
        // sort(nums1.begin(),nums1.end());
        
//         0(N+M) approach
        
        int idx1 = m-1;
        int idx2=  n-1;
        int i = n+m-1;
        while(idx1>=0 && idx2>=0){
            if(nums1[idx1]> nums2[idx2]){
                nums1[i--]=nums1[idx1--];   
            }
            else{
                nums1[i--]=nums2[idx2--];
            }
        }
        
        while(idx2>=0){
            nums1[i--]=nums2[idx2--];
        }
    }
};