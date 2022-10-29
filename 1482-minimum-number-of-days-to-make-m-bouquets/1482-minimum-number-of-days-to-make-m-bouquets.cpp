class Solution {
public:
    typedef long long ll;
    bool solve(vector<int>&nums, int m, int k, int mid){
        int cnt =0;
        for(int i=0;i<nums.size();i++){
            int t=0;
            
            while(i<nums.size() and mid>=nums[i]){
                t++;
                if(t==k)break;
                i++;
            }
            
            cnt+=(t/k);
        }
        
        return cnt>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((ll)m*(ll)k> bloomDay.size())return -1;
        
        ll ans =0;
        ll left = 1, right = 1e9;
        cout<<solve(bloomDay,m,k,3)<<endl;
        while(left<=right){
            ll mid = left + (right-left)/2;
            if(solve(bloomDay,m,k,mid)){
                ans=mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        
        return ans;
    }
};