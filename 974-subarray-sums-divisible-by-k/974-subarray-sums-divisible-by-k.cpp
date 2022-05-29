class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
//          Brute force T.C = 0(N^2) , S.C = 0(N)
        
        // int count =0;
        // for(int i=0;i<nums.size();i++){
        //     int currSum =0;
        //     for(int j=i;j<nums.size();j++){
        //         currSum+=nums[j];
        //         if(currSum%k==0)count++;
        //     }
        // }
        // return count;
        
//         Better solution T.C = 0(N) , s.c = 0(N)
        
        unordered_map<int,int> umap;
        umap[0]++;
        int currSum =0;
        int count=0;
        for(auto &it: nums){
            currSum+=it;
            int remainder = currSum%k;
            if(remainder<0)remainder+=k;
            if(umap.find(remainder)!=umap.end()){
                count+=umap[remainder];
            }
            
            umap[remainder]++;
        }
        
        return count;
    }
};