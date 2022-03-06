class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> umap;
        for(int i=0;i<order.size();i++){
            umap[order[i]]=i;
        }
        
        for(int i=0;i<words.size()-1;i++){
            string s1=words[i];
            string s2 = words[i+1];
            int j=0,k=0;
            while(j<=s1.size() && k<=s2.size()){
                if(s1[j]!='\0' && s2[k]=='\0') return false;
               if(umap[s1[j]] < umap[s2[k]])break;
                else if(umap[s1[j]] > umap[s2[k]])return false;
                j++,k++;
            }
            
            
        }
        
        return true;
    }
};