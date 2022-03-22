class Solution {
public:
    string getSmallestString(int n, int k) {
        string str="";
        while(k>0){
            int temp = 26;
            while((k-temp)<n-1){
                temp--;
            }
            
            str.push_back(96 + temp);
            n--;
            k-=temp;
        }
        
        reverse(str.begin(),str.end());
        return str;
    }
};