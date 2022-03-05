class Solution {
public:
    string interpret(string command) {
        int i=0;
        string ans="";
        while(i<command.size()){
            if(command[i]=='G'){
                ans+="G";
                i++;
                
            }
            else if(command[i]=='(' && command[i+1]==')' ){
                ans+="o";
                i+=2;
               
            }
            else if(i<command.size()-3){
                if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l'
                  && command[i+3]==')'){
                    ans+="al";
                    i+=4;
                }
                else i++;
            }
            
        }
        return ans;
    }
};