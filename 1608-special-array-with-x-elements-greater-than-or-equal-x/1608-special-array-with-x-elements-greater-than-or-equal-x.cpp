class Solution {
public:
    int isPossible(vector<int> & nums,int mid ){
        int count = 0;
        for(auto &i:nums){
            if(i>=mid)count++;
        }
        if(count==mid)return 1;
        else if(count> mid)return 2;
        else return -1;
    }
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start = 0 , end = nums[nums.size()-1];
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isPossible(nums,mid)==1){
                return mid;
            }
            else if(isPossible(nums,mid)==2){
                start = mid+1;
            }
            else end = mid-1;
        }
        
        return -1;
    }
};