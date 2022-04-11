class Solution {
    public boolean judgeSquareSum(int c) {
        long low = 0 , high =(long) Math.sqrt(c);
        while(low<=high){
            long num =  (low*low + high*high);
            if(num==(long)c)return true;
            else if(num>c)high--;
            else low++;
        }
        return false;
    }
   
    
}