class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//          T.C = 0(N log N)
        int n = nums.size();
        if(n==0) return 0;
//         sort(nums.begin(),nums.end());
//         int cnt =1 , res =1;
//         int i = 1;
     
//         cout<<endl;
//         while(i<n){
            
            
//             if(nums[i]-nums[i-1]==1){
//                 cnt++;
//                 i++;
//                 res = max(res, cnt);
//             }
//             else if(nums[i]-nums[i-1]==0)i++;
//             else{
             
//                 cnt=1;
//                 i++;
//             }
           
//         }
//         return res;
        
        unordered_set<int> st;
        for(auto &it: nums){
            st.insert(it);
        }
        
        int res = 1,cnt =1;
        for(auto &it : nums){
            if(st.find(it-1)!=st.end()){
                continue;
            }
            else{
                cnt=1;
                while(st.find(it+1)!=st.end()){
                    cnt++;
                    it+=1;
                }
                res = max(res,cnt);
            }
        }
        return res;
    }
};