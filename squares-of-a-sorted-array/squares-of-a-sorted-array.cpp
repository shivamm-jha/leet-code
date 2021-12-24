class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        
        // for(int i=0;i<n;i++)v.push_back(pow(nums[i],2));
        // sort(v.begin(),v.end());
        // return v;
        
        int i=0,j=n-1;
        int index=n-1;
        while(i<=j){
            if(abs(nums[i]) > abs(nums[j])){
                v[index]=nums[i] * nums[i];
                i++;
                index--;
            }
            else{
                v[index] = nums[j] * nums[j];
                j--;
                index--;
            }
        }
        
        return v;
        
        
        
    }
};