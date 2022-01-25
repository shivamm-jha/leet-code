class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int flag=0;
        int pivot_index;
        int n = arr.size();
        if(n<3) return false;
       
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<0){
                flag=1; 
                pivot_index=i;
                break;
            }
        }
        // cout<<pivot_index;
        if(pivot_index==0)return false;
        
        if(flag){
            for(int i=0;i<pivot_index;i++){
                if(arr[i+1]-arr[i]<=0) return false;
            }
            
            for(int i=pivot_index;i<n-1;i++){
                if(arr[i+1]-arr[i]>=0) return false;
            }
            return true;
        }
        return false;
    }
};