class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int> mp;
        int degree= INT_MIN;
        for(auto &it: nums){
            mp[it]++;
            degree= max(degree,mp[it]);
        }
        
        vector<int> maxDegEle;
        
        for(auto& it : mp){
            if(it.second==degree){
                maxDegEle.push_back(it.first);
            }
        }
        
      
        
        map<int,int> mp1,mp2;
        
        for(int i=0;i<nums.size();i++){
            if(mp1.find(nums[i])==mp1.end()){
                mp1[nums[i]]=i;
            }
        }
        
        
        for(int i=nums.size()-1;i>=0;i--){
            if(mp2.find(nums[i])==mp2.end()){
                mp2[nums[i]]=i;
            }
        }
        
        
//         for(auto &it: mp1){
//             cout<<it.first<<" "<<it.second<<endl;
//         }
//         cout<<endl;
        
//         for(auto &it: mp2){
//             cout<<it.first<<" "<<it.second<<endl;
//         }
        
        int len =INT_MAX;
        
        for(auto &it: maxDegEle){
            int i = mp1[it];
            int j = mp2[it];
            len= min(len,(j-i));
        }
        
        return len+1;
        
    }
};