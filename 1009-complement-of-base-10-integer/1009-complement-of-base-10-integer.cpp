class Solution {
public:
    int highest(int n){
        int i=0;
        while(pow(2,i)<=n){
            i++;
        }
        return pow(2,i);
    }
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int ans = highest(n);
        //cout<<ans<<endl;
        return ans-n-1;
    }
};