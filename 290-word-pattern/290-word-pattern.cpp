class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        int n = pattern.size(); // size of the pattern
        int m = s.size(); 
       
        vector<string> v;
        for(int i=0;i<m;i++){
            string temp="";
            while(s[i]!=' ' and i<m){
                temp+=s[i];
                i++;
            }
            v.push_back(temp);
        }
        // cout<<v.size();
        if(n!=v.size()) return false;
        if(n==1 and v.size()==1)return true;
        
        
        unordered_map<char,string> umap1;
        unordered_map<string,char> umap2;
        
        for(int i=0;i<v.size();i++){
            umap2[v[i]]=pattern[i];
        }
        
        for(int i=0;i<n;i++){
            if(umap1.find(pattern[i])!=umap1.end()){
                if(umap1[pattern[i]]!=v[i])return false;
                
            }
            else{
                if(umap2.find(v[i])!=umap2.end()){
                    if(umap2[v[i]]!=pattern[i])return false;
                }
                umap1[pattern[i]]=v[i];
            }
        }
   
        
       
        
         return true;
    }
};