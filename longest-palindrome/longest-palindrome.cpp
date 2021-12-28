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