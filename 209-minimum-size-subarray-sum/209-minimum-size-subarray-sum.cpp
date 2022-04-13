class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int len = INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     int currSum =0;
        //     for(int j=i;j<nums.size();j++){
        //         currSum+=nums[j];
        //         if(currSum>=target){
        //             len = min(len , j-i+1);
        //         }
        //     }
        // }
        // return len==INT_MAX? 0 : len;
        
//         optimal solution 0(n).. sliding window
        
        int shortest=INT_MAX;
        int n = nums.size();
        int left =0 , right =0;
        int currSum=0;
        while(right<n){
            currSum+=nums[right];
            if(currSum>=target){
                while(currSum>=target){
                    currSum-=nums[left];
                    left++;
                    
                }
                shortest= min(shortest, right-left+2);
            }
            
            right++;
        }
        
        
        return shortest==INT_MAX? 0 : shortest;
        
//         int n=nums.size();
//         int sum = 0;            //Current Sum
//         int left = 0;           //left ptr
//         int right = 0;          //right ptr
//         int shortest = INT_MAX; //shortest window with Sum>=Target
        
//         //Variable Size sliding window: 2-pointer
//         while(right<n){
//             sum += nums[right];//Add current element to Sum
            
//             if(sum >= target){//Check if currentSum >= Target
//                 //Skip all left elements till sum < target (to find the smallest window)
//                 while(sum>=target){
//                     sum -= nums[left];
//                     left++;
//                 }
//                 shortest = min(shortest,right-left+2);//Update smallest window size
//             }
//             right++;
//         }
//         return shortest==INT_MAX?0:shortest;
        
    }
};