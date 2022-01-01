class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
//         time complexity 0(n2)... space complexity (n)
        
//         vector<string> ans;
//         unordered_map<string,int> umap;
//         int n=s.length();
//         for(int i=0;i<n-9;i++){
//             string res="";
//             for(int j=i;j<=i+9;j++){
//                 res+=s[j];
//             }
//             umap[res]++;
//         }
        
//         for(auto it=umap.begin();it!=umap.end();it++){
//             if(it->second>1){
//                 ans.push_back(it->first);
//             }
//         }
//         return ans;
        
//         time complexity 0(n)... space complexity 0(n)
      
        vector<string> ans;
        if(s.size()<10){
           
            return ans;
        }
         unordered_map<string,int> umap;
         int n=s.length();
        int i=0;
         umap[s.substr(i,10)]++;
        
        while(i<s.size()-10){
            i++;
            umap[s.substr(i,10)]++;
            
        }
        for(auto it=umap.begin();it!=umap.end();it++){
             if(it->second>1){
                 ans.push_back(it->first);
             }
         }
         return ans;
        
    }
};