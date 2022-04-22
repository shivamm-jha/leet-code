class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n =s.size();
        vector<int> lastIndex(26,true);
        for(int i=0;i<n;i++){
            lastIndex[s[i]-'a']=i;
        }
        
        vector<bool> seen(26,false);
        stack<char> st;
        for(int i=0;i<n;i++){
            if(seen[s[i]-'a'])continue;
            while(!st.empty() && st.top()> s[i] && i<lastIndex[st.top()-'a']){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


// vector<int> lastIndex(26, 0);
//         for (int i = 0; i < s.length(); i++){
//             lastIndex[s[i] - 'a'] = i; // track the lastIndex of character presence
//         }
        
//         vector<bool> seen(26, false); // keep track seen
//         stack<char> st;
        
//         for (int i = 0; i < s.size(); i++) {
//             int curr = s[i] - 'a';
//             if (seen[curr]) continue; // if seen continue as we need to pick one char only
//             while(st.size() > 0 && st.top() > s[i] && i < lastIndex[st.top() - 'a']){
//                 seen[st.top() - 'a'] = false; // pop out and mark unseen
//                 st.pop();
//             }
//             st.push(s[i]); // add into stack
//             seen[curr] = true; // mark seen
//         }
        
//         string ans = "";
//         while (st.size() > 0){
//             ans += st.top();
//             st.pop();
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
