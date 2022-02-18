class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int index=-1;
        int j=0;
        while(j<n){
            if((num[j]-'0')%2!=0)index=j;
            j++;
        }
         //cout<<index<<endl;
        
        return num.substr(0,index+1);
        
    }
};