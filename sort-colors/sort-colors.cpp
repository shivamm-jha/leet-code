class Solution {
public:
    void sortColors(vector<int>& arr) {
        //brute force 
        
        
        //sort(nums.begin(),nums.end());
        
        int n=arr.size();
        
        //better tiime complexity )(n) .... space complexity 0(n)
        
        
//         int zero=0,one=0,two=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0)zero++;
//             else if(nums[i]==1)one++;
//             else two++;
//         }
//         vector<int> v;
//         for(int i=0;i<zero;i++){
//             v.push_back(0);
//         }
//         for(int i=0;i<one;i++){
//             v.push_back(1);
//         }
//         for(int i=0;i<two;i++){
//             v.push_back(2);
//         }
        
//         for(int i=0;i<v.size();i++){
//             nums[i]=v[i];
//         }
        
//         best solution 
        
       // time complexity 0(n) .... space complexity 0(1)
        
        int i=0,m=0,j=n-1;
        while(m<=j){
            if(arr[m]==0){
                swap(arr[i],arr[m]);
                i++; m++;
            }
            else if(arr[m]==1){
                m++;
            }
            else{
                swap(arr[j],arr[m]);
                j--;
            }
        }
        
    }
};