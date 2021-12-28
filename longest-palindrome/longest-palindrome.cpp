//  the basic idea behind this is whenever we have any char appearing even no. of time we will take it into consideration for our palindrome
// as the we can fix it int the start and end but when e encounter any char which is occuring odd numberof times we will add freq-1 to our result 
//  and in the final ans we will add +1 to ans. if we encountered any odd freq char
// bcoz one char we can handle in the middle of our palindrome (it wont make the string non - palindrome)
// for example :-aabbbcccdd
//  we can make palindromic string as adbcccbda

class Solution {
public:
  
    int longestPalindrome(string s) {
        int n=s.size();
        
        unordered_map<char,int> umap1;
        for(int i=0;i<n;i++){
           umap1[s[i]]++;
        }
        int count1=0;
        bool odd=false;
        for(auto it=umap1.begin();it!=umap1.end();it++){
            if(it->second%2==0)count1+=it->second;
            else {
                count1+=it->second-1;
                odd=true;
            }
        }
        
       if(odd) ++count1;
        
        return count1;
        
    
    }
};
