class Solution {
public:
    bool isSubsequence(string s, string t) {
       
        int k=0,j=0;
        
        for(int i=0;i<t.size();i++){
            if(t[i]==s[j]){
                k++;
                j++;
            }
        }
        if(k==s.size())return true;
        return false;
    }
};