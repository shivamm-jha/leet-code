class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = words.size();
        vector<string> ans;
        for(int i=0;i<n;i++){
            string str= words[i];
            unordered_map<char,char> umap1;
            unordered_map<char,char> umap2;
                int m =pattern.size();
            int flag=1;
            for(int i=0;i<m;i++){
                if(umap1.find(str[i])==umap1.end()){
                    if(umap2.find(pattern[i])==umap2.end()){
                        umap1[str[i]]=pattern[i];
                        umap2[pattern[i]]=str[i];
                    }
                    else if(umap2.find(pattern[i])!=umap2.end()){
                        if(umap2[pattern[i]]!=str[i]){
                            flag=0; break;
                        }
                    }
                }
                
                else if(umap1.find(str[i])!=umap1.end()){
                    if(umap1[str[i]]!=pattern[i]){
                        flag=0; break;
                    }
                }
            }
            
            if(flag){
                ans.push_back(str);
            }
            umap1.clear(), umap2.clear();
        }
        
        return ans;
    }
};