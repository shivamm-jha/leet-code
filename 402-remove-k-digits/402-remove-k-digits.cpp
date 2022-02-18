class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        st.push(num[0]);
        for(int i =1;i<n;i++){
           while(!st.empty() && k>0 && st.top()>num[i]){
               st.pop();k--;
           }
            if(!st.empty() || num[i]!='0')st.push(num[i]);
        }
        
        
        while(!st.empty() && k--){
            st.pop();
            
        }
        if(st.empty())return "0";
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
       
       
        return ans;
    }
};