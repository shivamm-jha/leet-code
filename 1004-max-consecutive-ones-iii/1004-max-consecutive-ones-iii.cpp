class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, end =0;
        
        int ans =0;
        
        while(end< nums.size()){
            if(nums[end]==0)k--;
            
            while(k<0){
                if(nums[start]==0)k++;
                start++;
            }
            
            end++;
            ans = max(ans,end-start);
        }
        
        return ans;
        
    }
};




// int start = 0, max = INT_MIN,zeroCounter=0;
//         for(int end=0 ; end<A.size() ; end++){
//             if(A[end]==0){
//                 zeroCounter++;
//             }
//             while(zeroCounter>K){
//                 if(A[start]==0){
//                     zeroCounter--;
//                 }
//                 start++;
//             }
            
//             max = std::max(max,end-start+1);
//         }
        
//         return max;
