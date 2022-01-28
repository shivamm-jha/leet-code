class Solution {
public:
    int numberOfArrays(vector<int>& arr, int lower, int upper) {
//         int n = arr.size();
        
//         int start = lower, end = upper;
//         int start_val=0;
//         while(start<= end){
//             int mid = start + (end-start)/2;
//             int temp = mid + arr[0];
//             if(temp>= lower and temp <=upper){
//                 start_val= mid;
//                 end= mid-1;
//             }
//             else if(temp<lower){
//                 start=mid+1;
//             }
//             else if(temp>upper){
//                 end=mid-1;
//             }
//         }
        
        
//          //cout<<start_val;
        
        
        
        
        
//         int count=0;
//         int flag=0;
//         int i;
//         for( i=start_val;i<=upper;i++){
//             vector<int> v;
//             v.push_back(i);
//             int j =0;
//             while(j<n){
                
//                 int temp = v[v.size()-1] + arr[j];
                
//                 if(temp>=lower and temp<=upper){v.push_back(temp); j++;}
//                 else {
//                     flag=1; break;
//                 }
//             } 
//             // cout<<endl;
//             // for(auto &i:v)cout<<i<<" ";
//             // cout<<endl;
//             if(v.size()==n+1)count++;
//             else if(count>=1 and v.size()!=n+1) break;
//             v.clear();
//         }
//         // cout<<endl<<i;
//         return count;

        
        long long minn=INT_MAX,maxx=INT_MIN;
        long long sum=0;
        for(auto i: arr){
            sum+=i;
            minn=min(minn,sum);
            maxx=max(maxx,sum);
        }
        sum=0;
        for(int i=lower;i<=upper;i++){
            if(i+minn>=lower and i+maxx<=upper){
                sum++;
            }
        }
        return sum;
        
    }
};