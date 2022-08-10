class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
//         int cnt =0;
//         for(int i=0;i<n-2;i++){
//             int j=i+1;
//             while(j<n-1){
//                 if(nums[j]-nums[i]==diff)break;
//                 j++;
//             }
//             int k = j+1;
//             while(k<n){
//                 if(nums[k]-nums[j]==diff){
//                     cnt++;
//                     break;
//                 }
//                 k++;
//             }
//         }
        
//         return cnt;
        int cnt=0;
        for(int i=0;i<n-2;i++){
            int j = diff+nums[i];
            int j_idx= search(nums,i+1,n-2,j);
            // cout<<j<<" "<<j_idx<<endl;
            if(j_idx!=-1){
                int k = diff+nums[j_idx];
                int k_idx= search(nums,j_idx+1,n-1,k);
                // cout<<k<<endl;
                if(k_idx!=-1)cnt++;
            }
        }
        
        // int ans= search(nums,0,n-2,4);
        // cout<<ans<<endl;
        return cnt;
    }
    
    int search(vector<int>&nums,int l, int h, int key){
        int low =l, high=h;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==key){
                return mid;
            }
            else if(nums[mid]<key){
                low=mid+1;
            }
            else high =mid-1;
        }
       return -1;
    }
};