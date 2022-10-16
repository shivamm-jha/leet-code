class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt =0;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
        
           if(nums[i]%2==0)nums[i]=0;
            else nums[i]=1;
            
        }
        
        
        int sum =0;
        vector<int> prefix;
        for(auto &it:nums){
            sum+=it;
            prefix.push_back(sum);
            mp[sum]++;
        }
        
        for(auto &it:prefix){
            if(it==k)cnt++;
            if(mp.find(it-k)!=mp.end()){
                cnt+= mp[it-k];
            }
        }
        
        return cnt;
    }
};