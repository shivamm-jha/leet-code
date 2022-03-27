class Solution {
public:
    static bool comp(pair<int,int>&a , pair<int,int> &b){
       
        if(a.first==b.first){
            return a.second < b.second;
        }
         return a.first < b.first;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> soldiers;
        for(int i=0;i<mat.size();i++){
            int count = 0;
            for(int j=0;j<mat[i].size();j++){
                count+=mat[i][j];
            }
            soldiers.push_back(count);
        }
        
        vector<pair<int,int>> v;
        for(int i=0;i<soldiers.size();i++){
            v.push_back({soldiers[i],i});
        }
        
        sort(v.begin(),v.end(),comp);
        
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
        
    }
};