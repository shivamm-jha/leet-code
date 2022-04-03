class Solution {
public:
   static bool is_sorted(vector<int>&nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                return false;
            }
        }
       return true;
    }
    void nextPermutation(vector<int>& nums) {
        if(is_sorted(nums)){
            sort(nums.begin(),nums.end());
            cout<<"yes"<<endl;
            return;
        }
        int firstSwap , secondSwap;
       
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]> nums[i-1]){
                firstSwap = i-1;
               
                break;
            }
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[firstSwap]){
                secondSwap =  i;
              
                break;
            }
        }
        cout<<firstSwap<<" "<<secondSwap<<endl;
        swap(nums[firstSwap],nums[secondSwap]);
        if(firstSwap+2< nums.size()){
            reverse(nums.begin()+firstSwap+1, nums.end());
        }
        
    }
};