class Solution {
public:
    int subtractProductAndSum(int num) {
        int sum=0,prod=1;
        while(num){
            sum+=num%10;
            prod*=num%10;
            num/=10;
        }
        
        return prod-sum;
    }
};