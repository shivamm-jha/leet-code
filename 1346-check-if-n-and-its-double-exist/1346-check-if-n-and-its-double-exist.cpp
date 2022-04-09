class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &i:arr){
            mp[i]++;
        }
        
        for(auto &i:arr){
            if(i==0){
                if(mp[i]>=2){
                    return true;
                }
            }
            else {if(mp.find(2*i)!=mp.end())return true;}
        }
        
        return false;
        
        
    }
};