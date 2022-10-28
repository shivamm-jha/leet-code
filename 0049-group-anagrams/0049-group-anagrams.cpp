class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n = s.size();
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> mp;
        
        for(int i=0;i<n;i++){
            string t = s[i];
            sort(begin(s[i]),end(s[i]));
            mp[s[i]].push_back(t);
        }
        
        for(auto &it: mp){
            ans.push_back(it.second);
        }
        
        return ans;
        
        
    }
};