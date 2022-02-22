class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n){
            int rem = n%26;
            if(rem!=0){
                ans+= 64 + rem;
                n/=26;
            }
            else{
                ans+= 'Z';
                n = n/26 -1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};