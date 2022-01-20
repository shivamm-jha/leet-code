class Solution {
public:
    int ans(vector<int>& piles, int h, long i){
         long count=0;
        int n = piles.size();
         for(int j=0;j<n;j++){
              
               if(piles[j]/i==0)count+=1;
               else if(piles[j]%i!=0)count+= piles[j]/i +1;
               else if(piles[j]%i==0)count+= piles[j]/i;
            }
            
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
       
       long start=1;
        long end = *max_element(piles.begin(),piles.end());
      // cout<<start<<" "<<end<<endl;
        
        
        
        long mid;
        long res= INT_MAX;
        while(start<=end){
            //cout<<mid<<endl;
             mid = start + (end-start)/2;
          
            if(ans(piles,h,mid)<=h){
                res=  min(res,mid);
                end = mid-1;
            }
            else if(ans(piles,h,mid) > h){
                
                start = mid+1;
            }
        }
       return res;
    }
};