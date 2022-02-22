class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int sum =0;
        int i=0,j=1;
        while(i<n){
            sum+= (columnTitle[i]-64)* pow(26,(n-j));
            j++;
            i++;
        }
        return sum;
    }
};