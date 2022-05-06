class Solution {
public:
    string removeDuplicates(string s) {
//         T.c = 0(N) , S.C = 0(N)
        
//         stack<char> st;
//         for(auto &it:s){
//            if(!st.empty() && st.top()==it){
//                st.pop();
//            }
//             else st.push(it);
//         }
        
//         string str="";
//         while(!st.empty()){
//             str+=st.top();
//             st.pop();
//         }
//         reverse(str.begin(),str.end());
//         return str;
        
//         recurrsive solution gives memeory limit exceeded ..
        
        // for(int i=1;i<s.size();i++){
        //     if(s[i]==s[i-1]){
        //         return removeDuplicates(s.substr(0,i-1)+s.substr(i+1,s.size()));
        //     }
        // }
        // return s;
        
        
//         best solution .. two pointers , T.C = 0(N) , S.C = 0(1)
        
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.size()==0)ans.push_back(s[i]);
            else if(ans.back()==s[i]){
                ans.pop_back();
            }
            else ans.push_back(s[i]);
        }
        return ans;
        

        
    }
};