class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int total = 0;
        for(auto &it : nums){
            total+=it;
        }
        
        int subarraySum = 0;
        int n =  nums.size();
        int i=0;
        for(;i<n-k;i++){
            subarraySum+=nums[i];
        }
        // cout<<subarraySum<<endl;
        int val = subarraySum;
        int j=0;
        while(i<n){
            cout<<subarraySum<<endl;
            subarraySum+=(nums[i++]-nums[j++]);
            val= min(val,subarraySum);
            
        }
        
        
        return total - val;
        
    }
};