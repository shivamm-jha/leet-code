class Solution {
public:
//     recurrsion + memoization (still giving tle)
    
    map<pair<int,int>,int> hash;
    int solve(vector<int>&nums, int i , int j, int x , int count){
        if(x==0)return count;
        if(i>j || x<0)return 1e6;
        if(hash.find({i,j})!=hash.end())return hash[{i,j}];
        int left = solve(nums,i+1,j,x-nums[i],count+1);
        int right = solve(nums,i,j-1,x-nums[j],count+1);
        return hash[{i,j}]=min(left,right);
    }
    
    
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        // int res = solve(nums,0,n-1,x,0);
        // return res >=1e6 ? -1 : res;
        int target =-x;
        for(auto &it:nums){
            target+=it;
        }
        if(target==0) return n;
        unordered_map<int,int> hash;
        
        hash[0]=-1;
        int size =-1,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(hash.find(sum-target)!=hash.end()){
                size = max(size, i - hash[sum-target]);
            }
            hash[sum]=i;
        }
        
        return size==-1 ? size : n-size;
    }
};