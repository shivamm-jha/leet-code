class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int count) {
        int n = arr.size();
        if(count==0) return true;
        if(n==0)return false;
        if(n==1) return arr[0]==0;
        arr.push_back(0);
        arr.insert(arr.begin(),0);
        n= arr.size();
        int i = 0 , flowers=0;
        while(i<n-2 and flowers!=count ){
            if(arr[i]==0 and arr[i+1]==0 and arr[i+2]==0){
                flowers++;
                arr[i+1]=1;
            }
            i++;
        }
        
        return flowers==count;
        
    }
};