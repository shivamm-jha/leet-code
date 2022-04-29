class Solution {
public:
    int minSwaps(string s) {
        int openingBracket = 0 , closingBracket =0;
        for(auto &it:s){
            if(it=='[')openingBracket++;
            else{
                if(openingBracket)openingBracket--;
                else closingBracket++;
            }
        }
        
        if(openingBracket==0 & closingBracket==0)return 0;
        else return (closingBracket+1)/2;
    }
};

