class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'){
                s[i]='9'; break;
            }
        }
        
        int ans =0,j=1;;
        for(int i=s.size()-1;i>=0;i--){
            ans+= (s[i]-'0') *j;
            j*=10;
        }
        return ans;
    }
};