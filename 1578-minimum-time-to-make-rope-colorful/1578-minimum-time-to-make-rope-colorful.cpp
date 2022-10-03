class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int n = colors.size();
        if(n==1) return 0;
        
        int ans =0;
        
        for(int i=0;i<n;i++){
            if(colors[i]==colors[i+1]){
                int j=i;
                int max_ele = INT_MIN;
                int sum = 0;
                while(j<n && colors[j]==colors[i]){
                    max_ele = max(max_ele,(int)neededTime[j]);
                    sum+=neededTime[j];
                    j++;
                }
                
                ans+= (sum-max_ele);
                i=j;
                i--;
                
            }
        }
       
        return ans;
    }
};