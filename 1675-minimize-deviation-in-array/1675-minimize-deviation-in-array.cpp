class Solution {
public:
   
    int minimumDeviation(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;
        int min_val =INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0)nums[i]*=2;
            pq.push(nums[i]);
            min_val = min(min_val,nums[i]);
        }
        
        int diff =INT_MAX;
        while(pq.top()%2==0){
            int mx = pq.top();
            pq.pop();
            diff=min(diff,mx-min_val);
            pq.push(mx/2); 
            min_val=min(min_val,mx/2);
        }
        return min(diff,pq.top()-min_val);
        
        
    }
};