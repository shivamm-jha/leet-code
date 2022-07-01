class Solution {
public:
     static bool comp(pair<int,int>&a , pair<int,int>&b){
        if(a.second== b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    int maximumUnits(vector<vector<int>>& nums, int truckSize) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i][0],nums[i][1]});
        }
        
        sort(v.begin(),v.end(),comp);
        int ans = 0;
        for(int i=0;i<v.size();i++){
            if(truckSize >= v[i].first){
                ans+= (v[i].first * v[i].second);
                truckSize-= v[i].first;
            }
            else{
                ans+= truckSize * v[i].second;
                break;
            }
        }
        return ans;
    }
};