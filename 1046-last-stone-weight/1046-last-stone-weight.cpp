class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n==1){
            return stones[0];
        }
        
        priority_queue<int> pq;
        for(auto &it : stones){
            pq.push(it);
        }
        
        while(!pq.empty()){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            pq.push(y-x);
            if(pq.size()==1){
                return pq.top();
            }
        }
        
        return 0;
        
    }
};