class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3) return false;
        if(is_sorted(nums.begin(),nums.end()))return false;
//          0(N^3) approach...
        
        // for(int i=0;i<nums.size()-2;i++){
        //     for(int j=i+1;j<nums.size()-1;j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]<nums[k] && nums[k]<nums[j]){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        
        
//         0(N^2)...
        
//         int min_ele = nums[0];
//         for(int j=0;j<nums.size()-1;j++){
//             min_ele =min(min_ele,nums[j]);
//             for(int k=j+1;k<nums.size();k++){
//                 if(nums[k]>min_ele && nums[k]<nums[j]){
//                     return true;
//                 } 
                
//             }
//         }
//        return false;
        
        
//         T.c= 0(N) , S.C = 0(N)
        
        stack<int> st;
        int secondMax = INT_MIN;
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[i]>st.top()){
                secondMax= max(secondMax,st.top());
                st.pop();
            }
            st.push(nums[i]);
            if(nums[i]<secondMax && !st.empty()){
                return true;
            }
        }
        return false;
        
        
        
    }
};



// int secondmax = -1e9 , n = nums.size();
// 		stack<int> s;
        
//         for(int i=n-1;i>=0;i--){
//             while(!s.empty() and nums[i] > s.top()){
//                 secondmax = max(secondmax,s.top());
//                 s.pop();
//             }
//             s.push(nums[i]);
//             if(nums[i] < secondmax and s.empty() == false) return true; 
//             // stack is not empty means we have highest
//             // element in our stack basically we have 3 in 132 pattern 
//         }
//         return false;