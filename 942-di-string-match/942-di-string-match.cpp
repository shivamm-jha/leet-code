class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int i=0,j=n;
        vector<int> v;
        for(int k=0;k<n;k++){
            if(s[k]=='D'){
                v.push_back(j);
                j--;
            }
            else if(s[k]=='I'){
                v.push_back(i);
                i++;
            }
        }
        
        if(s[n-1]=='D')v.push_back(j);
        else v.push_back(i);
        return v;
    }
};