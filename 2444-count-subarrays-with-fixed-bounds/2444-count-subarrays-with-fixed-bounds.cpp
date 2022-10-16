class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        // int cnt =0;
        
//         T.c = 0(N^2)
        
        // for(int i=0;i<n;i++){
        //     int mini = INT_MAX, maxi=INT_MIN;
        //     for(int j=i;j<n;j++){
        //         mini= min(mini,nums[j]);
        //         maxi = max(maxi,nums[j]);
        //         if(mini==minK && maxi==maxK)cnt++;
        //     }
        // }
        
        
        long mini=-1, maxi=-1, badmin=-1, cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
                badmin=i;
            }
            if(nums[i]==minK)mini=i;
            if(nums[i]==maxK)maxi=i;
            
            cnt+= max(0L, min(mini,maxi)-badmin);
        }
        
        return cnt;
        
    }
};


// long res = 0, jbad = -1, jmin = -1, jmax = -1, n = A.size();
//         for (int i = 0; i < n; ++i) {
//             if (A[i] < minK || A[i] > maxK) jbad = i;
//             if (A[i] == minK) jmin = i;
//             if (A[i] == maxK) jmax = i;
//             res += max(0L, min(jmin, jmax) - jbad);
//         }
//         return res;