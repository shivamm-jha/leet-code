class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
       // for(int i=1;i<n-1;i++){
       //     int avg = (nums[i-1]+nums[i+1])/2;
       //     if(avg== nums[i]){
       //         int j=i+1;
       //         while(nums[i]==nums[j] and j<n){
       //             j++;
       //         }
       //         swap(nums[i],nums[j]);
       //     }
       // }
        
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        vector<int> v;
        while(i<j){
           
            v.push_back(nums[i++]);
            v.push_back(nums[j--]);
        }
        
        if(n%2!=0)v.push_back(nums[i]);
        

        return v;
    }
};