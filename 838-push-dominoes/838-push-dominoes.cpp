class Solution {
public:
    string pushDominoes(string nums) {
        int n =  nums.size();
        
        vector<int> leftForce(n);
        vector<int> rightForce(n);
        
        int idx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]=='R'){
                idx =i;
            }
            else if(nums[i]=='L'){
                idx=-1;
            }
            rightForce[i]=idx;
            
        }
        
        idx=-1;
        
        for(int i = n-1;i>=0;i--){
            if(nums[i]=='L'){
                idx=i;
            }
            else if(nums[i]=='R'){
                idx=-1;
            }
            
            leftForce[i]=idx;
        }

       
        
        
        for(int i=0;i<n;i++){
            if(nums[i]=='.'){
            int leftDiff = leftForce[i]==-1 ? INT_MAX : abs(leftForce[i]-i);
            
            int rightDiff = rightForce[i]==-1 ?INT_MAX : abs(rightForce[i]-i);
            
            if(leftDiff==rightDiff)nums[i]='.';
            else if(leftDiff > rightDiff)nums[i]='R';
            else if(leftDiff < rightDiff)nums[i]='L';
                
            }
            
        }
        
        return nums;
    }
};