class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int> st;
       for(auto &i:nums){
          st.insert(i);
       }
        
        priority_queue<int> pq;
        for(auto &i:st)pq.push(i);
        if(pq.size()<3)return pq.top();
        int count=2;
        
        while(!pq.empty() &&  count--){
            pq.pop();
        }
        return pq.top();
    }
};