class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> st;
        int missing, repeating;
        
        for(auto &it: nums){
            if(st.find(it)==st.end())st.insert(it);
            else repeating = it;
        }
        
        for(int i=1;i<=nums.size();i++){
            if(st.find(i)==st.end()){
                missing = i;
            }
        }
        
        return {repeating,missing};
    }
};