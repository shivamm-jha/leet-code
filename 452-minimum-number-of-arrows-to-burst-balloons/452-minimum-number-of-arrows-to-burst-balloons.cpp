class Solution {
public:
   static bool comparator(vector<int>& a, vector<int> & b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
         int n = points.size();
        if(n==0) return 0;
        sort(points.begin(),points.end(),comparator);
       
        int count=1,end=points[0][1];
        for(int i=1;i<n;i++){
            // while(points[i][0]<=end){
            //     end = min(points[i][1],end);
            //     i++;
            //     if(i>=n)return count;
            // }
            // count++;
            // end = points[i][1];
            
//             -------------------------------------------------------
            
            // if(points[i][0]<=end){continue; end = min(points[i][1],end);}
            // else{
            //     count++;
            //     end = points[i][1];
            // }
            
//             --------------------------------------------------------------------
            
            if(points[i][0]> end){
                count++;
                end = points[i][1];
            }
        }
        return count;
         
    }
};