class Solution {
public:
    int mod = 1e9+7;
    int ans(vector<int> & nums , int target){
        int count=0;
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int key = target - (nums[i]+nums[j]);
                count+=umap[key];
            }
            count%=mod;
            umap[nums[i]]++;
        }
        
        return count%mod;
        
    }
    int threeSumMulti(vector<int>& nums, int target) {
        int res = ans(nums,target);
        return res;
    }
};


// long long mod = 1e9 + 7;
    
//     int threeSumMulti(vector<int>& arr, int target) {
        
//         int n = arr.size();
        
//         unordered_map<int, int> mp;
        
//         int count = 0;
        
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = i + 1; j < n; j++)
//             {
//                 int need = target - arr[i] - arr[j];
                
//                 count += mp[need];
//             }
            
//             count %= mod;
            
//             mp[arr[i]]++;
//         }
        
//         return count % mod;
//     }