class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        
//         brute force time complexity 0(n2)....
        
        // for(int i=0;i<n;i++){
        //     int zero=0,one=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0) zero++;
        //         else one++;
        //         if(zero==one)ans= max(ans,(j-i+1));
        //     }
        // }
        // return ans;
        
        
        unordered_map<int,int> umap;
        int curr_sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)curr_sum++;
            else if(nums[i]==0) curr_sum--;
            
            if(curr_sum==0) ans=max(ans, i+1);
            else if(umap.find(curr_sum)!=umap.end()){
                ans=max(ans, i-umap[curr_sum] );
            }
            else{
                umap[curr_sum]=i;
            }
        }
        return ans;
        
    }
};