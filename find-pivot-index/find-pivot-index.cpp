class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        int curr_sum=0;
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            v.push_back(curr_sum);
        }
        
        for(int i=0;i<n;i++){
            //cout<<v[i]-nums[i]<<" "<<v[n-1]-v[i]<<endl;
            if(v[i]-nums[i]==v[n-1]-v[i]){
                return i;
            }
        }
        return -1;
    }
};