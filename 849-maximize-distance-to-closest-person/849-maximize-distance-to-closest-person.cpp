class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int> left(n,0);
        left[0]=-1;
        for(int i=1;i<n;i++){
            if(seats[i-1]==1){
                left[i]=i-1;
            }
            else{
                left[i]=left[i-1];
            }
           
            
        }
        
//         for right 
        vector<int> right(n,0);
       right[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            if(seats[i+1]==1){
                right[i]=i+1;
            }
            else{
               right[i]=right[i+1];
            }
        }
        // for(auto &i:left)cout<<i<<" ";
        // cout<<endl;
        // for(auto &i:right)cout<< i<<" ";
        
        int mx=0;
        for(int i=0;i<n;i++){
            if(seats[i]!=1){
                int left_dist=INT_MAX,right_dist=INT_MAX;
                if(left[i]!=-1){
                    left_dist = abs(i-left[i]);
                }
                if(right[i]!=-1){
                    right_dist = abs(i-right[i]);
                }
                mx= max(mx, min(left_dist,right_dist));
            }
        }
        
        return mx;
    }
};