class Solution {
public:
    bool isPossible(vector<int>& nums) {
        priority_queue<int> pq;
        long total = 0;
        for(auto &it : nums){
            pq.push(it);
            total+=it;
        }
        while(!pq.empty()){
            int maxEl = pq.top();
            pq.pop();
            long remainingSum = total - maxEl;
            if(maxEl==1 || remainingSum==1)return true;
            if(maxEl < remainingSum || remainingSum==0)return false;
            int updatedMax = maxEl % remainingSum;
            if(updatedMax==0)return false;
            maxEl = updatedMax;
            pq.push(maxEl);
            total = updatedMax + remainingSum;
        }
        return true;
    }
};