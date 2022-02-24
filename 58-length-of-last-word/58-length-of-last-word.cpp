class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1;
        // traverse from the end of the string till you get first char...

            while(i>=0 && s[i]==' '){
                i--;
            }
        // traverse till the point where you get another blank space

            int j= i;

            while(j>=0 && s[j]!=' '){
                j--;
            }

            // now the difference b/w the first char from last and last char before a blank                 appears is the answer 

            return i-j;
    }
};