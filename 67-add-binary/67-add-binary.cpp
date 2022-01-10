class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size(),m=b.size();
        int i=0,carry=0;
        string ans="";
        while(i<n || i<m || carry!=0){
            int x=0;
            if(i<n and a[n-i-1]=='1')x=1;
            int y=0;
            if(i<m and b[m-i-1]=='1')y=1;
            ans = to_string((x+y+carry)%2) + ans;
            carry=(x+y+carry)/2;
            i+=1;
            
        }
        return ans;
    }
};