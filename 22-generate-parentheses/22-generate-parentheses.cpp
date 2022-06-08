class Solution {
public:
    vector<string> ans;
    void generate(string &empty , int open , int close){
        if(open ==0 && close ==0){
            ans.push_back(empty);
            return;
        }
        if(open > 0){
            empty.push_back('(');
            generate(empty,open-1,close);
            empty.pop_back();
        }
        if(close > 0 && open < close){
            empty.push_back(')');
            generate(empty,open, close-1);
            empty.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string empty="";
        generate(empty,n,n);
        return ans;
    }
};