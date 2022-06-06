class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
    vector<pair<int,int>> v;
    for(int i=0;i<nums.size();i++){
        v.push_back({nums[i][0],nums[i][1]});
    }
    
    sort(v.begin(),v.end());
    int start = v[0].first , end = v[0].second;
    vector<vector<int>> ans;
    
    
    for(int i=1;i<v.size();i++){
        if(v[i].first <= end){
            end = max(end,v[i].second);
        }
        else{
            ans.push_back({start,end});
            start = v[i].first;
            end = v[i].second;
        }
    }
        int n = nums.size();
    end = max(end, v[n-1].second);
        ans.push_back({start,end});
    return ans;
    }
};