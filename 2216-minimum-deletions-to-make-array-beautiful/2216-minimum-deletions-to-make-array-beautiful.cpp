class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int cnt= 0 ;
        for(int i=0;i<n-1;i++){
            if((i-k)%2==0 && nums[i]==nums[i+1]){
                cnt++;
                k++;
                //i+=2;
            }
        }
        
        if((n-cnt)%2==0)return cnt;
        return cnt+1;
    }
};