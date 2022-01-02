class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        int n=time.size();
        
//         brute force 0(n2)
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if((time[i]+time[j])%60==0)count++;
        //     }
        // }
        // return count;
        
//         better solution 0(n) .... space complexity 0(n)
        
       int arr[60]={0};
        for(int i=0;i<time.size();i++){
            arr[time[i]%60]++;
        }
        int ans=0;
        for(int i=0;i<=30;i++){
            if(i==0 || i==30){
                int n=arr[i];
                ans+=(n*(n-1))/2;
            }
            else{
                ans+=arr[i]*arr[60-i];
            }
        }
        return ans;
    }
};

