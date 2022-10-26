class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int curr = 0;
        //     for(int j=i;j<n;j++){
        //         curr+=nums[j];
        //         if(j-i>=1 and curr%k==0)return true;
        //     }
        // }
        // return false;
        
        
        
        map<int,int> mp;
        int curr =0, rem =0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            if(i>=1 and curr%k==0)return true;
            rem = curr%k;
            
            if(mp.find(rem)!=mp.end() and i-mp[rem]>1)return true;
            if(mp.find(rem)==mp.end())mp[rem]=i;
        }
        
        return false;
    }
};