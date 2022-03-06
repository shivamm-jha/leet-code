class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            if(i<s.size()-2){
               
                if(s[i]>='0' && s[i]<='9' && s[i+1]>='0' && s[i+1]<='9' && s[i+2]=='#'){
                    int temp = (s[i]-'0')*10 + (s[i+1]-'0');
                    ans+= temp + 96;
                    i+=3;
                   
                }
                else{
                    ans+= (s[i]-'0') + 96;
                    i+=1;
                }
            }
            else{
                ans+= (s[i]-'0') + 96;
                i+=1;
            }
            
        }
        
        return ans;
    }
};