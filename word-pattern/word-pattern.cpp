class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string g="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(g);
                g.clear();
            }
            else
                g+=s[i];
        }
        v.push_back(g);
        
        
        if(v.size()!=pattern.size())return false;
        unordered_map<char,string> umap1;
        for(int i=0;i<pattern.size();i++){
            if(umap1.find(pattern[i])==umap1.end()){
                umap1[pattern[i]]=v[i];
            }
        }
        
        unordered_map<string,char>umap2;
        for(int i=0;i<v.size();i++){
            if(umap2.find(v[i])==umap2.end()){
                umap2[v[i]]=pattern[i];
            }
        }
        
        
        
        for(int i=0;i<pattern.size();i++){
            if(umap1[pattern[i]]!=v[i] || umap2[v[i]]!=pattern[i])return false;
        }
        return true;
        
        
    }
};