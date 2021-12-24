class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int pos = (i+k)%n;
            v[pos]=nums[i];
        }
        
        for(int i=0;i<n;i++){
            nums[i]=v[i];
        }
        
    }
};