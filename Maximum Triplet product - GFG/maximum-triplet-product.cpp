//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// class Solution {
//   public:
//     long long maxTripletProduct(long long arr[], int n)
//     {
//     	// Complete the function
//     // 	sort(arr,arr+n);
    	
//     // 	long long ans1 = arr[n-3]*arr[n-2]*arr[n-1];
    	
//     // 	long long ans2 = arr[0]*arr[1]*arr[n-1];
    	
//     // 	return max(ans1,ans2);
    
//         long long maxx=LLONG_MIN, second_max=LLONG_MIN, third_max = LLONG_MIN;
//         long long min=LLONG_MAX,second_min=LLONG_MAX;
        
//         for(int i=0;i<n;i++){
//             int el = arr[i];
//             if(el>maxx){
//                 third_max=second_max;
//                 second_max=maxx;
//                 maxx=el;
//             }
//             else if(el>second_max){
//                 third_max=second_max;
//                 second_max=el;
//             }
//             else if(el>third_max){
//                 el=third_max;
//             }
            
//             if(el<min){
//                 second_min=min;
//                 min=el;
//             }
//             else if(el<second_min){
//                 second_min=el;
//             }
//         }
        
//         // cout<<maxx<<" "<<second_max<<" "<<third_max<<endl;
//         // cout<<min<<" "<<second_min;
        
//         if(min!=LLONG_MAX and second_min!=LLONG_MAX)
        
//         return max(maxx*second_max*third_max, min*second_min*maxx);
        
        
//         return maxx * second_max * third_max;
        
//     }
// };


class Solution {
public:
    long long maxTripletProduct(long long arr[], int n) {
        long long largest = LLONG_MIN, slargest = LLONG_MIN, tlargest = LLONG_MIN;
        long long smallest = LLONG_MAX, ssmallest = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long el = arr[i];

            if (el > largest) {
                tlargest = slargest;
                slargest = largest;
                largest = el;
            } else if (el > slargest) {
                tlargest = slargest;
                slargest = el;
            } else if (el > tlargest) {
                tlargest = el;
            }

            if (el < smallest) {
                ssmallest = smallest;
                smallest = el;
            } else if (el < ssmallest) {
                ssmallest = el;
            }
        }

        if (smallest != LLONG_MAX && ssmallest != LLONG_MAX) {
            return max(smallest * ssmallest * largest, largest * slargest * tlargest);
        }

        return largest * slargest * tlargest;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends