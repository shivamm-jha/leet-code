class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       
        cout<<endl;
        int ans=0;
        int i=n-1;
        while(i>=2){
            int c=nums[i],b=nums[i-1],a=nums[i-2];
            if(a+b<=c)i--;
            else if(a+c<=b)i--;
            else if(b+c<=a)i--;
            else{
                ans=max(ans,a+b+c);
               
                i--;
            }
            
        }
        return ans;
        
       
    }
};