class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if(n<k) return false;
        unordered_set<string> st;
//         for(int i=0;i<n;i++){
//             string str="";
//             for(int j=i;j<n;j++){
//                 str+=s[j];
//                 if(str.size()==k)st.insert(str);
//             }
//         }
        
        int i =0;
        string str="";
        while(i<k){
            str+=s[i];
            i++;
        }
        st.insert(str);
        int j=k;
        i=0;
        while(j<n){
            str.erase(i,1);
            str+=s[j];
            j++;
            st.insert(str);
        }
        
        if(st.size()== pow(2,k))return true;
        return false;
    }
};