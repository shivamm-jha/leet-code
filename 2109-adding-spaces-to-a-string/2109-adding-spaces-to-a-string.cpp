class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        unordered_set<int> st;
        for(auto &i:spaces)st.insert(i);
        string ans="";
        int n = s.size();
        for(int i=0;i<n;i++){
            if(st.find(i)!=st.end()){
                ans+=" ";
                ans+=s[i];
                st.erase(i);
            }
            else ans+=s[i];
        
        }
        return ans;
    }
};