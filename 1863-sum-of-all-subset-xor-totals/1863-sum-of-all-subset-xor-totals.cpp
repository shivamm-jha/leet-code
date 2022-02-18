class Solution {
public:
    vector<vector<int>> allsubsets;
    
    void subset(vector<int> & v , int i , vector<int> & nums){
        if(i==nums.size()){
            allsubsets.push_back(v);
            return;
        }
        
//          pick the curr ele....
        v.push_back(nums[i]);
        subset(v,i+1,nums);
        v.pop_back();
        
//         don't pick the curr ele...
        
        subset(v,i+1,nums);
    }
    
    vector<vector<int>> generate(vector<int> & nums){
        vector<int> v;
        subset(v,0,nums);
        return allsubsets;
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> v= generate(nums);
        
        int ans=0;
        for(int i=0;i<v.size();i++){
            int xor_sum = 0;
            for(int j=0;j<v[i].size();j++){
                xor_sum^=v[i][j];
            }
            
            ans+=xor_sum;
        }
        return ans;
    }
};