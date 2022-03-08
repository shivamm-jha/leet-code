class Solution {
public:
    static bool comp(pair<int,int> a , pair<int,int> b){
        if(a.first==b.first){
            return a.second< b.second;
        }
        return a.first < b.first;
    }
    int count_bits(int n){
        int count=0;
        while(n){
            count+= n& 1;
            n >>= 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& nums) {
        vector<pair<int,int>> v;
        for(auto &i:nums){
            v.push_back({count_bits(i),i});
        }
        
        sort(v.begin(),v.end(),comp);
        vector<int> ans;
        for(auto &i: v){
            ans.push_back(i.second);
            
        }
        return ans;
    }
};