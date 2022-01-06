class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        list<int> g1;
        for(int i=0;i<n;i++){
            auto it=g1.begin();
            for(int j=0;j<index[i];j++)it++;
            g1.emplace(it,nums[i]);
        }
        vector<int> v;
        list <int> :: iterator it;
        for(it = g1.begin(); it != g1.end(); ++it)v.push_back(*it);
        return v;
    }
};