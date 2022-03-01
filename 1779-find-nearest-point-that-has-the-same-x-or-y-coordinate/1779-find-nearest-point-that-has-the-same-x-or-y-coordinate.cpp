class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int ans=INT_MAX,index=-1;
        for(int i=0;i<n;i++){
            if(x==points[i][0] || y==points[i][1]){
                int dist = abs(x-points[i][0]) + abs(y-points[i][1]);
                if(dist<ans){
                    ans=dist;
                    index=i;
                }
            }
        }
        return index;
    }
};