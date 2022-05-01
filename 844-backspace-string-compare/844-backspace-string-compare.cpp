class Solution {
public:
    bool equalOrNot(stack<char> st1, stack<char> st2){
        if(st1.size()!=st2.size()) return false;
        while(!st1.empty() && !st2.empty()){
            if(st1.top()!=st2.top())return false;
            st1.pop();
            st2.pop();
        }
        return true;
    }
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        for(auto &it:s){
            if(it!='#'){
                st1.push(it);
            }
            else {
                if(!st1.empty())st1.pop();
            }
        }
        
        stack<char> st2;
        for(auto &it:t){
            if(it!='#'){
                st2.push(it);
            }
            else {
                if(!st2.empty())st2.pop();
            }
        }
        
        return equalOrNot(st1,st2);
        
    }
};