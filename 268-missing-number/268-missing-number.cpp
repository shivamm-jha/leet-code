class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int x1=0,x2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            x1^=nums[i];
            x2^=(i+1);
        }
        return x1 ^ x2;
        
        
        
        
//         this method is perfect....
        
    //     int res = nums.size();
    // for(int i=0; i<nums.size(); i++){
    //     res ^= i;
    //     res ^= nums[i];
    //     //cout<<res<<endl;
    // }
    // return res;
        
        
//         this method is not perfect as it might integer overflow...
        // long long sum=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        // }
        // return ((n)*(n+1))/2-sum;
    }
};