class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> prefixSum;
        long long currSum =0;
        for(auto &it:nums){
            currSum+=it;
            prefixSum.push_back(currSum);
        }
        
        int cnt = 0;
        
        int n= prefixSum.size();
        
        for(int i=0;i<n-1;i++){
            if(prefixSum[i] >= prefixSum[n-1]-prefixSum[i]){
                cnt++;
            }
        }
        
        return cnt;
    }
};