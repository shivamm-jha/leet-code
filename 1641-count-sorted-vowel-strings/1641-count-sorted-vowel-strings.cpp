class Solution {
public:
    vector<string> s = {"a","e","i","o","u"};
    int res =0;
    void count(int n, int i, string &str ){
        if(str.size()>=n){
           
            res++;
            return;
        }
        
        if(i>4)return;
        
//          pick
        str+=s[i];
        
        count(n,i,str);
        str.pop_back();
        
        
        
//         don't pick
        count(n,i+1,str);
    }
    int countVowelStrings(int n) {
        string str="";
        count(n,0,str);
        return res;
    }
};