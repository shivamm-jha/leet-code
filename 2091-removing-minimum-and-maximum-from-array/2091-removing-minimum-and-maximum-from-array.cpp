class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int max_ele =INT_MIN, max_idx = 0;
        int min_ele =INT_MAX , min_idx = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_ele){
                max_ele = nums[i];
                max_idx=i+1;
            }
            if(nums[i]<min_ele){
                min_ele=nums[i];
                min_idx=i+1;
            }
        }
        
        
        int move1 = max(max_idx,min_idx);
        int move2 = (nums.size()-min(max_idx,min_idx))+1;
        int move3=0;
        if(max_idx<nums.size()/2){
            move3+=max_idx;
        }
        else move3+=(nums.size()-max_idx)+1;
        
        if(min_idx<nums.size()/2){
            move3+=min_idx;
        }
        else move3+=(nums.size()-min_idx)+1;
        cout<<move1<<" "<<move2<<" "<<move3<<endl;
        return min(min(move1,move2),move3);
    }
};