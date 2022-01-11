class Solution {
public:
   static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it=umap.begin();it!=umap.end();it++){
            v.push_back(make_pair(it->first,it->second));
        }
        
        sort(v.begin(), v.end(), sortbysec);
        // for(auto &i:v)cout<<i.first<<" "<<i.second<<endl;
         vector<int> ans;
        int i=0;
        while(k-- and i<v.size()){
            ans.push_back(v[i].first);
            i++;
        }
        return ans;
        
    }
};