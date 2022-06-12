class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> hash;
        int start =0 , end =0;
        int score = 0;
        int sum =0;
        while(start < n && end <n){
            sum+=nums[end];
            
            
            if(hash.find(nums[end])==hash.end()){
                // sum+=nums[end];
                hash.insert(nums[end]);
                end++;
                // score = max(score,sum);
            }
            else{
                // sum+=nums[end];
                while(hash.find(nums[end])!=hash.end()){
                    sum-=nums[start];
                    hash.erase(nums[start]);
                    start++;
                    
                }
                hash.insert(nums[end]);
                end++;
            }
            score = max(score,sum);
        }
        
        return score;
    }
};