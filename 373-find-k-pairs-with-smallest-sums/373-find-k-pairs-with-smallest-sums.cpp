class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> ans;
        priority_queue<  pair<int,pair<int,int>>  > pq;
        n= min(n,k);
        m= min(m,k);
        for(int i=0;i<n ;i++){
           
            for(int j=0;j <m;j++){
                if(pq.size() < k){
                    pq.push(make_pair(nums1[i]+nums2[j]  , make_pair(nums1[i],nums2[j])));
                   
                }
                else if(nums1[i] + nums2[j] < pq.top().second.first + pq.top().second.second){
                   pq.pop();
                     pq.push(make_pair(nums1[i]+nums2[j]  , make_pair(nums1[i],nums2[j])));
                     
                }
                else break;
                             
            }
        }
        
        
        while(!pq.empty()){
            vector<int> v={pq.top().second.first,pq.top().second.second};
            ans.push_back(v);
            v.clear();
           
            pq.pop();
            
        }
        return ans;
        
    }
};