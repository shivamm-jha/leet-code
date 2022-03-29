class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> umap;
        for(auto &i:nums){
            if(umap.find(i)!=umap.end())return i;
            else umap[i]++;
        }
        return 1;
    }
};