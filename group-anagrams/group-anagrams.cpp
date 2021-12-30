class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n=str.size();
        vector<vector<string>> res;
        if(n==0)return res;
        unordered_map<string,vector<string>> umap;
        for(int i=0;i<n;i++){
            string temp=str[i];
            sort(str[i].begin(),str[i].end());
            umap[str[i]].push_back(temp);
        }
        
        for(auto it=umap.begin();it!=umap.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};