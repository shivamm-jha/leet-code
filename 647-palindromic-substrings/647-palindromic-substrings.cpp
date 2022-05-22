class Solution {
public:
    // int dp[]
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); ++i) {
            for(int j = i; j < s.size(); ++j) {
                count += helper(s, i, j);
            }
        }
        return count;
    }
    
    
//     function to check a string is palindrome or not (recurrsive)
    
    int helper(string& s, int i, int j) {
        if (i >= j) return 1;
        return s[i] == s[j] ? helper(s, i+1, j-1) : 0;
    }
    
    
    
//      funtion to check a string is palindrome or not (iterative)
    
    //  bool isPalindrome(string s){
    //     int i=0, j=s.size()-1;
    //     while(i<j){
    //         if(s[i]!=s[j]){
    //             return false;
    //         }
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }
    
};