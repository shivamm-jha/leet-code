class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, num =0 ,i = 0;
        while(s[i]==' '){
            i++;
        }
        
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-')sign =-1;
            i++;
        }
        
        while(s[i]>='0' and s[i]<='9'){
            if(num > INT_MAX/10 || (num==INT_MAX/10 and (s[i]-'0') > 7)){
                if(sign == -1)return INT_MIN;
                return INT_MAX;
            }
             num = 10 * num + (s[i++]-'0');
        }
        
        return num * sign;
    }
};