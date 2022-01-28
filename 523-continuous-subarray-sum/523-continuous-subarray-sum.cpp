class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n= nums.size();
//         brute force solution.........
        
        
        // for(int i=0;i<n;i++){
        //     int curr=0;
        //     for(int j=i;j<n;j++){
        //         curr+=nums[j];
        //         if(curr%k==0 and (j-i)>=2)return true;
        //     }
        // }
        // return false;
        
        if(n>=2){
            for(int i=0;i<n-1;i++){
            if(nums[i]==0 and nums[i+1]==0) return true;
          }
        }
        
        int curr=0;
        multimap<int,int> umap;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            
           if(curr%k==0 and i>0)return true;
            if(umap.find(curr%k)!=umap.end() ) {
                if(abs(umap.lower_bound(curr%k)->second - i)>=2) return true;
            }
            umap.insert(pair<int,int>(curr%k,i));
        }
        
        // for(auto it=umap.begin();it!=umap.end();it++){
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        return false;
    }
};