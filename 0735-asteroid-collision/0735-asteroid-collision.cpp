class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.empty() || nums[i]>0)st.push(nums[i]);
            
            else{
                while(!st.empty() && st.top()>0 && st.top() < abs(nums[i]))st.pop();
                
                if(!st.empty() && st.top()==abs(nums[i]))st.pop();
                else{
                    if(st.empty() || st.top()<0)
                    st.push(nums[i]);
                }
            }
        }
        
        ans.resize(st.size());
        
        for(int i=ans.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        
        return ans;
       
    }
};