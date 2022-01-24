class Solution {
public:
    bool all_capital(string s){
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='a' and s[i]<='z')return false;
        }
        return true;
    }
    
    bool only_first_capital(string s){
        int n= s.size();
        if(s[0]>='A' and s[0]<='Z'){
            for(int i=1;i<n;i++){
            if(s[i]>='A' and s[i]<='Z')return false;
         }
            return true;
        }
        
        return false;
        
    }
    
    bool all_small(string s){
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A' and s[i]<='Z')return false;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        int n =  word.size();
        
        if(all_capital(word)){ cout<<"1"; return  true;}
         if(all_small(word)){ cout<<"2"; return true;}
         if(only_first_capital(word)){ cout<<"3"; return true;}
        return false;
        
    }
};