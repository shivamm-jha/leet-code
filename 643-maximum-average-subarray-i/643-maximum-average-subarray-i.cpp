class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans =0;
        int n = nums.size();
        
//      time complexity 0(n2).. space complexity 0(1)   
        
        
        // for(int i=0;i<n;i++){ 
        //     double curr = 0;
        //     for(int j=i;j<n;j++){
        //         curr+=nums[j];
        //         if((j-i +1 )==k){
        //             ans=max(ans,curr/k);
        //         }
        //     }
        // }
        
        
        double curr=0;
        vector<double> v;
        for(auto &i:nums){
            curr+=i;
            v.push_back(curr);
        }
        double res = v[k-1]/k;
        for (int i = k; i < v.size(); i++) {
			res = max(res, (v[i] - v[i - k])/ k);
		}
        
        return res;
    }
};