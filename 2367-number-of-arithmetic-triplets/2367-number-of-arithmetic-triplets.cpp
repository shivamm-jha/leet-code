class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int cnt =0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            while(j<n-1){
                if(nums[j]-nums[i]==diff)break;
                j++;
            }
            int k = j+1;
            while(k<n){
                if(nums[k]-nums[j]==diff){
                    cnt++;
                    break;
                }
                k++;
            }
        }
        
        return cnt;
    }
};