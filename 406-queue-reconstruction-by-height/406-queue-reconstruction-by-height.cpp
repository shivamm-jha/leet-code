class Solution {
public:
    static bool comp(pair<int,int>&a , pair<int,int>&b){
        if(a.first == b.first)return a.second < b.second;
        return a.first > b.first;
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& nums) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i][0],nums[i][1]});
        }
        
        sort(v.begin(),v.end(),comp);
        
        vector<vector<int>> ans;
        for(int i=0;i<v.size();i++){
            ans.insert(ans.begin()+v[i].second,{v[i].first,v[i].second});
            
        }
        return ans;
    }
};