class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto &it:s){
           if(!st.empty() && st.top()==it){
               st.pop();
           }
            else st.push(it);
        }
        
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};