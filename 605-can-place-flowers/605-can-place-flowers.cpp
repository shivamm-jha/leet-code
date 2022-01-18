class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int count) {
        int n = arr.size();
        if(n==1){
            if(arr[0]==0){
                count--;
                arr[0]=1;
                
            }
        }
        
       else if(n==2){
            if(arr[0]==0 and arr[1]==0){
                count--;
                arr[0]=1;
            }
        }
        else{
        for(int i=0;i<n;i++){
            if(i==0){
                if(arr[i+1]==0 and arr[i]==0){
                    count--;
                    arr[i]=1;
                }
            }
            
            else if(i==n-1){
                if(arr[i-1]==0 and arr[i]==0){
                    count--;
                    arr[i]=1;
                }
            }
            else{
                if(arr[i-1]==0 and arr[i]==0 and arr[i+1]==0){
                    count--;
                    arr[i]=1;
                }
            }
        }
        }
        // for(auto &i:arr)cout<<i<<" ";
        // cout<<endl<<count;
        if(count>0) return false;
        return true;
    }
};