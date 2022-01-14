class Solution {
public:
    int reverse(int x) {
        
        
        long long temp=0;
        while(x){
            
            temp=temp*10 + x%10;
            x=x/10;
            
        }
  
            
        return(temp<INT_MIN || temp>INT_MAX)?0:temp;
        
       
        
        
}
    
};