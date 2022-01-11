class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         int xor1=1;
//         for(int i=2;i<=nums.size();i++){ 
//             xor1^=i;
//         }
        
//         int xor2=nums[0];
//         for(int i=1;i<nums.size();i++){ 
//             xor2^=nums[i];
//         }
        
//         return xor1^xor2;
    //     int res = nums.size();
    // for(int i=0; i<nums.size(); i++){
    //     res ^= i;
    //     res ^= nums[i];
    //     //cout<<res<<endl;
    // }
    // return res;
        
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return ((n)*(n+1))/2-sum;
    }
};