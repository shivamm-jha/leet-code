class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        if(s.size()!=t.size())return false;
        int arr1[256]={0},arr2[256]={0};
        for(int i=0;i<n;i++){
            if(!arr1[s[i]] && !arr2[t[i]]){
                arr1[s[i]]=t[i];
                arr2[t[i]]=s[i];
            }
           else if(arr1[s[i]]!=t[i])return false;
        }
        return true;
        
       
    }
};