class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(k==1) return matrix[0][0];
        priority_queue<int>pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        
        return pq.top();
    }
};