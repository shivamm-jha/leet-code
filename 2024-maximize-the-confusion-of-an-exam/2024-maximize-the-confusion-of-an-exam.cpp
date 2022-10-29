class Solution {
public:
    int solve(string nums, int k, char t) {
        int start = 0, end =0;
        
        int ans =0;
        
        while(end< nums.size()){
            if(nums[end]==t)k--;
            
            while(k<0){
                if(nums[start]==t)k++;
                start++;
            }
            
            end++;
            ans = max(ans,end-start);
        }
        
        return ans;
        
    }
    
    
    int maxConsecutiveAnswers(string nums, int k) {
        int cnt_T = solve(nums,k,'T');
        int cnt_F = solve(nums,k,'F');
        return max(cnt_T,cnt_F);
    }
};