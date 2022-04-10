class Solution {
public:
    string minimizeResult(string expression) {
        int mn =INT_MAX,a=-1,b=-1;
        int plusIndex =0;
        while(plusIndex<expression.size() && expression[plusIndex]!='+'){
            plusIndex++;
        }
        
        for(int i=0;i<plusIndex;i++){
            for(int j=plusIndex+1;j<expression.size();j++){
                 int n1=stoi(expression.substr(0,i)==""?"1" : expression.substr(0,i));
                 int n2 =stoi(expression.substr(i,plusIndex-i));
                 int n3 = stoi(expression.substr(plusIndex+1,j-plusIndex));
                 int n4=stoi(expression.substr(j+1)==""?"1":expression.substr(j+1));
                if(n1*(n2+n3)*n4<mn){
                    mn= n1*(n2+n3)*n4;
                    a=i,b=j+1;
                }
            }
        }
        expression.insert(a,"(");
        if(b==expression.size()){
            expression+=")";
        }
        else{
            expression.insert(b+1,")");
        }
        return expression;
    }
};


//  int mn= INT_MAX, a=-1,b=-1 ,n= exp.size(), plus=0;
	
//     //get the place of + to differentiate two parts 
//     for(int i=0;i<exp.size();i++) if(exp[i]=='+') plus=i;
	
//     //both parts
//     for(int i=0;i<plus;i++){
//         for(int j=plus+1;j<n;j++){
//             //extract 4 Integers
//             int n1= stoi(exp.substr(0,i)==""?"1":exp.substr(0,i));   //from 0 to i index we have one integer
//             int n2= stoi(exp.substr(i,plus-i));                      //from i to plus-1 index -> we have one integer
//             int n3= stoi(exp.substr(plus+1,j-plus));                 //from plus+1 index to j , we have one value
//             int n4= stoi(exp.substr(j+1)==""?"1":exp.substr(j+1));   //from j to last we have one value
//             //update minimum by updating a and b variable
//             if(n1*(n2+n3)*n4<mn) mn= n1*(n2+n3)*n4 ,a=i ,b=j+1;
//         }
//     }
	
//     //insert "(" at a-position and ")" at b-position we captured above
//     exp.insert(a,"(");
//     if(b==n) exp+=")";   else exp.insert(b+1,")");
//     return exp;
// }