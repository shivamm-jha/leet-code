class Solution {
public:
    string nextGreaterPermutation(string nums){
        int firstSwap , secondSwap;
        for(int i=nums.size()-1;i>0;i--){
            if((nums[i]-'0') > (nums[i-1]-'0')){
                firstSwap = i-1; break;
            }
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]-'0' > nums[firstSwap]-'0'){
                secondSwap=i; break;
            }
        }
        
        swap(nums[firstSwap],nums[secondSwap]);
        if(firstSwap+2< nums.size()){
            reverse(nums.begin()+firstSwap+1, nums.end());
        }
        return nums;
    }
    int getMinSwaps(string num, int k) {
        string original = num;
        for(int i=0;i<k;i++){
            num = nextGreaterPermutation(num);
            
        }
        int count =0;
        while(original!=num){
            for(int i=0;i<original.size();i++){
                if(original[i]!=num[i]){
                    int j=i;
                    while(j<num.size() && original[j]!=num[i])j++;
                    
                   while(j>i){
                       swap(original[j],original[j-1]);
                       j--;
                       count++;
                   }
                }
            }
        }
        
        
        return count;
        
    }
};