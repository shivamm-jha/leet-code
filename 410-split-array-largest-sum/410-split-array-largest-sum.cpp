class Solution {
public:
    bool isPossible(vector<int>&nums,int mid, int m){
        int count = 1;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                sum=nums[i];
                count++;
            }
            if(count>m)return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int max_ele=INT_MIN;
        int total = 0;
        for(auto &i:nums){
            total+=i;
            max_ele = max(max_ele,i);
        }
        
        int ans = -1;
        int start = max_ele , end = total;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isPossible(nums,mid,m)){
                ans=mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};

