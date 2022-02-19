class Solution {
public:
 
    int minimumMoves(string s) {
        int n = s.size();
        int count = 0;
        int i=0;
        while(i<n){
            while(s[i]!='X' && i<n){
                i++;
            }
            if(i<n && s[i]=='X'){
                count++;
                i+=3;
            }
            if(i>=n)break;
        }
        return count;
    }
};