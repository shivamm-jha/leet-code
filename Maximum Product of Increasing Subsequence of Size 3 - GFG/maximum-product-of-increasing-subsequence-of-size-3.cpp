// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
//   static bool comp(pair<int,int>&a , pair<int,int> &b){
//       return a.first
//   }
    vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        // vector<int> ans;
        // set<int> st;
        // for(int i=0;i<n;i++){
        //     st.insert(arr[i]);
        // }
        // int temp=0;
        // int a=-1, b=-1 , c=-1;
        // for(int i=1;i<n-2;i++){
        //     int num1 , num2 ;
        //     auto it1=st.find(arr[i]);
        //     it1--;
        //     if(it1!=st.begin()-1)num1=*it1;
        //     auto it2 = st.find(arr[i]);
        //     it2++;
        //     if(it2!=st.end()) num2 =*it2;
        //     if(arr[i]*num1*num2>temp){
        //         temp=arr[i]*num1*num2;
        //         a=num1, b= arr[i] , c=num2;
        //     }
        // }
        
        // if(a!=-1 && b!=-1 && c!=-1){
        //     ans={a,b,c};
        //     return ans;
        // }
        // else{
        //     ans.push_back(-1);
        // }
        // return ans;
        set<int> s;
        long long ans = -1;
        vector<int> res,suff;
        for(int i=0;i<n;i++){
            suff.push_back(arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            suff[i] = arr[i];
            if(i+1<n){
                suff[i] = max(suff[i],suff[i+1]);
            }
        }
        for(int i=1;i<n-1;i++){
            s.insert(arr[i-1]);
            auto itr = s.lower_bound(arr[i]);
            if(itr!=s.begin() and arr[i]<suff[i+1]){
                itr--;
                long long curr = arr[i]*1LL*(*itr)*1LL*(suff[i+1]);
                if(curr>ans){
                    ans = curr;
                    res = {*itr,arr[i],suff[i+1]};
                }
            }
        }
        if(res.empty()){
            res.push_back(ans);
        }
        return res;
    }
     

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends