class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int cnt =1 , res =1;
        int i = 1;
     
        cout<<endl;
        while(i<n){
            
            
            if(nums[i]-nums[i-1]==1){
                cnt++;
                i++;
                res = max(res, cnt);
            }
            else if(nums[i]-nums[i-1]==0)i++;
            else{
             
                cnt=1;
                i++;
            }
           
        }
        return res;
    }
};