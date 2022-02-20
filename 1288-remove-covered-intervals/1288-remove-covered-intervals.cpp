class Solution {
public:
    static bool comp(pair<int,int> & a , pair<int,int> &b){
        if(a.first==b.first) return a.second> b.second;
       return  a.first < b.first;
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>> v;
        for(int i=0;i<intervals.size();i++){
            v.push_back({intervals[i][0], intervals[i][1]});
        }
        
        sort(v.begin(),v.end(),comp);
        int count =0;
        int start = v[0].first, end = v[0].second;
        
        for(int i=1;i<v.size();i++){
            while(i<v.size() && v[i].first>=start && v[i].second<=end ){
                count++;
               
               i++;
            }
            
            if(i<v.size())start = v[i].first, end = v[i].second;
        }
        return v.size()-count;
       
    }
};