class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if(n<2) return 0;
        
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(!st.empty()){
                    if(s[st.top()]=='(')st.pop();
                    else st.push(i);
                }
                else st.push(i);
            }
        }
        
        
        int endTerminal = n;
        int maxL= 0;
        while(!st.empty()){
            int startTerminal = st.top();
            st.pop();
            maxL = max(maxL,endTerminal-startTerminal-1);
            endTerminal = startTerminal;
        }
        
        return max(maxL,endTerminal);
    }
};