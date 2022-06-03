class Solution {
public:
    static bool comp(pair<int,int>&a , pair<int,int>&b){
        if(a.second==b.second)return a.first < b.first;
        return a.second < b.second;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int ans = 1;
        vector<pair<int,int>>v;
        
        
        for(int i=0;i<pairs.size();++i){
            v.push_back({pairs[i][0],pairs[i][1]});
        }
        
        sort(v.begin(),v.end(),comp);
        // for(int i=0;i<v.size()-1;++i){
        //     int count=1;
        //     int start = v[i].second;
        //     for(int j=i+1;j<v.size();++j){
        //         if(v[j].first > start){
        //             count++;
        //             start = v[j].second;
        //         }
        //     }
        //     ans=max(ans,count);
        // }
        //int ans = 1;
        int count = 1;
        int start = v[0].second;
        for(int i=1;i<v.size();i++){
            if(v[i].first > start){
                count++;
                start = v[i].second;
                ans= max(count,ans);
            }
            // else{
            //     ans= max(ans,count);
            //     count=1;
            //     start = v[i].second;
            // }
        }
        return ans;
    }
};