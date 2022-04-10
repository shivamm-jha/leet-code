class Solution {
public:
    int calPoints(vector<string>& ops) {
        int points = 0;
        stack<int> st;
        int i = 0;
        while(i<ops.size()){
            string ch = ops[i];
            cout<<ch.size()<<" ";
            if(ch[0]=='C'){
                st.pop();
            }
            else if(ch[0]=='D'){
                int temp = st.top();
                st.push(2*temp);
            }
            else if(ch[0]=='+'){
                int temp1= st.top();
                st.pop();
                int temp2= st.top();
                st.pop();
                st.push(temp2);
                st.push(temp1);
                st.push(temp1+temp2);
            }
            else if(ch[0]=='-'){
                int num = 0;
                int j = ch.size()-1;
                int k=1;
                while(j>0){
                    num+= (ch[j]-'0')*k;
                    k*=10;
                    j--;
                }
                st.push(-num);
            }
            else{
                int num = 0;
                int j = ch.size()-1;
                int k=1;
                while(j>=0){
                    num+= (ch[j]-'0')*k;
                    k*=10;
                    j--;
                }
                st.push(num);
            }
            i++;
        
            
        }
        
        while(!st.empty()){
            // cout<<st.top()<<" ";

            points+=st.top();
            st.pop();
        }
        return points;
       
    }
};