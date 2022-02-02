class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        // for(int i=1;i<n-1;i++){
        //     if(arr[i]> arr[i-1] and arr[i]>arr[i+1])return i;
        // }
        // return 0;
        
        int start = 1, end = n-2;
        int ans;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]> arr[mid+1]){
                ans=mid; break;
            }
            else if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else if(arr[mid]<arr[mid-1]){
                end=mid-1;
            }
        
        }
        return ans;
    }
};