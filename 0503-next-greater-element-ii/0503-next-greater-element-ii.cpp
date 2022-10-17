class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> ans(n,-1);
        
        
        
        for(int i=2 * n-1;i>=0;i--){
           while(!st.empty() && st.top()<=nums[i%n]){
               st.pop();
           }
            
            if(!st.empty())ans[i%n]=st.top();
           
            st.push(nums[i%n]);
        }
        
        
        
//         for(auto &it: nums){
//             ans.push_back(mp[it]);
//         }
        
        return ans;
        
        
    }
};


// int num = nums[i % n];
//     while(!s.empty() && s.top() <= num) s.pop();
//     if(!s.empty()) res[i % n] = s.top();
//     s.push(num);