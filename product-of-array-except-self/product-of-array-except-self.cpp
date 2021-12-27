class Solution {
public:
    #define ll long long
    vector<int> productExceptSelf(vector<int>& nums) {
        ll whole_prod=nums[0],ex_zero=nums[0];
        int n=nums.size(),c0=0;
        for(int i=1;i<n;i++){
          if(nums[i]==0)c0++;
                whole_prod*=nums[i];
           
            if(nums[i]!=0){
                ex_zero*=nums[i];
            }
        }
        
       
        vector<int> ans(n,0);
            if(c0<=1){
                for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    ll temp=whole_prod/nums[i];
                    ans[i]=(temp);
                }
                else{
                    ans[i]=(ex_zero);
                }

            }
        }
        else{
            return ans;
        }
        
        return ans;
    }
};