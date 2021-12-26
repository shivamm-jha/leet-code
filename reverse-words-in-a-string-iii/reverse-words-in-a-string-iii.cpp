class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int front=0;
        for(int i=0;i<=n;i++){
            if(i==n || s[i]==' '){
                reverse(&s[front],&s[i]);
                front=i+1;
            }
        }
        return s;
        
    }
};


