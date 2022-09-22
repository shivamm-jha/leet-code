class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.size();
        for(int i=0;i<n;i++){
            string str ="";
            int j=i;
            while(j<n && s[j]!=' '){
                str+=s[j];
                j++;
            }
            
            reverse(str.begin(),str.end());
            ans+=str;
            if(j<n)ans+=" ";
            i=j;
            
        }
        
        return ans;
    }
};