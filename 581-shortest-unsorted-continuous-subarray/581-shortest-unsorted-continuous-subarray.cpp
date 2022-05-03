class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v(nums);
        sort(v.begin(),v.end());
        int start =0 , end =0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=nums[i]){
                start = i; break;
            }
        }
        
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]!=nums[i]){
                end = i ; break;
            }
        }
        
        return (end-start==0? 0 : (end-start)+1);
        
    }
};