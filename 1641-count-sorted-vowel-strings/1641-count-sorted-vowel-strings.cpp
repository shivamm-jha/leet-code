class Solution {
public:
    vector<string> s = {"a","e","i","o","u"};
    vector<string> ans;
    int count1 =0;
    void count(int n, int i, string &str ){
        if(str.size()>=n){
            // ans.push_back(str);
            count1++;
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
        // for(auto &it:ans)cout<<it<<" ";
        // return ans.size();
        return count1;
    }
};