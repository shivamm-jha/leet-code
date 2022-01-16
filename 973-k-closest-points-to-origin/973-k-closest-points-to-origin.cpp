class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int  n = points.size();
        priority_queue<pair<float,int>> pq;
        for(int i=0;i<n;i++){
            float a = pow(points[i][0],2);
            float b = pow(points[i][1],2);
            float temp = sqrt(a+b);
            pq.push(make_pair(temp,i));
        }
        k= n-k;
        while(k--){
            pq.pop();
        }
        
        vector<vector<int>> v;
        while(!pq.empty()){
            int index = pq.top().second;
           v.push_back(points[index]);
            pq.pop();
            
        }
        return v;
        
        
    }
};