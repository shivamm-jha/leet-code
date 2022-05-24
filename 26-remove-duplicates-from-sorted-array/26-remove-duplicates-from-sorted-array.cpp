class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        nums[count]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[count])continue;
            else{
                count++;
                nums[count]=nums[i];
            }
        }
        cout<<count<<endl;
        return count+1;
    }
};