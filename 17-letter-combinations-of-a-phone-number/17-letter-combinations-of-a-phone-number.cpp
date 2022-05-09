class Solution {
public:
    vector<string> ans;
    vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string digits, string &output , int index){
        if(index>= digits.size()){
            ans.push_back(output);
            return;
        }
        
        string temp = mp[digits[index]-'0'];
        for(int i=0;i<temp.size();i++){
            output.push_back(temp[i]);
            solve(digits,output,index+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return ans;
        string output="";
        solve(digits,output,0);
        return ans;
    }
};
