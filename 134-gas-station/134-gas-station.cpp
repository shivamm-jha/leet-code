class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int n = gas.size();
       int fuel =0, costt=0;
        for(int i=0;i<n;i++){
            fuel+=gas[i];
            costt+=cost[i];
        }
        if(costt>fuel)return -1;
        int start=0;
        int curr=0;
        for(int i=0;i<n;i++){
           curr+=gas[i]-cost[i];
            if(curr<0){
                start=i+1;
                curr=0;
            }
        }
        return start;
    }
};