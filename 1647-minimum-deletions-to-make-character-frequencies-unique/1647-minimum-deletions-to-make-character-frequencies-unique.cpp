class Solution {
public:
    int minDeletions(string s) {
        int n = s.size();
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        
        map<int,vector<char>> umap;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                umap[freq[i]].push_back('a'+i);
            }
        }
        
        
        for(auto &it : umap){
            vector<char> v= it.second;
            cout<<it.first<<" ";
            for(auto &val : v)cout<<val<<" ";
            cout<<endl;
        }
        int cnt =0;
        for(auto &it : umap){
            vector<char> v = it.second;
            if(v.size()>1){
                for(int i=0;i<v.size()-1;i++){
                    int val = it.first;
                    while(umap.find(val)!=umap.end()){
                        val--;
                        cnt++;
                    }

                    if(val>0)umap[val].push_back(v[i]);
                }
            }
        }
        
        return cnt;
        
        
        
    }
};