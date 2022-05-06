class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(k>s.size()) return s; // base case
        stack<pair<int,int>> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(st.empty() || st.top().first!=s[i])st.push({s[i],1});
            else{
                auto prev = st.top();
                st.pop();
                st.push({s[i],prev.second+1});
            }
            if(st.top().second==k)st.pop();
        }
        
        string ans="";
        while(!st.empty()){
            auto curr = st.top();
            st.pop();
            while(curr.second--){
                ans.push_back(curr.first);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


