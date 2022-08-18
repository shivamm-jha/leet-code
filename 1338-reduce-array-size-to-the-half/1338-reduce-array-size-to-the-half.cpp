class Solution {
public:
    static bool comp(pair<int,int>&a , pair<int,int> &b){
        return a.second > b.second;
    }
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
       unordered_map<int,int> umap;
        for(auto &it:arr)umap[it]++;
        
        vector<pair<int,int>> v;
        for(auto &it: umap){
            v.push_back({it.first,it.second});
        }
        
        sort(v.begin(),v.end(),comp);
        // for(auto &it:v){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        int ans=0;
        int cnt = n;
        int i=0;
        while(i<n){
            //ut<<cnt<<endl;
            if(cnt<=ceil(n/2))break;
            ans++;
            cnt-=v[i++].second;
        }
        return ans;
    }
};