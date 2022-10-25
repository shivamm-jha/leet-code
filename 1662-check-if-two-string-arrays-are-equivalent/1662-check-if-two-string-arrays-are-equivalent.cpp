class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         string s1="", s2="";
//         for(auto &it:word1)s1+=it;
//         for(auto &it: word2)s2+=it;
        
//         return s1==s2;
        
        int i=0, j=0;
        int k =0, l=0;
        
        while(i < word1.size() && j <word2.size()){
            int size1 = word1[i].size();
            int size2 = word2[j].size();
            
            
            
            while(k<size1 && l<size2){
                if(word1[i][k]!=word2[j][l]){
                    cout<<word1[i][k]<<" "<<word2[j][l]<<endl;
                    return false;
                }
                k++;
                l++;
            }
            
            if(k==size1){i++; k=0;}
            if(l==size2){j++; l=0;}
        }
        
        cout<<i<<" "<<j<<endl;
        cout<<k<<" "<<l<<endl;
        
        if(i>= word1.size() and j>=word2.size())return true;
        if(i<word1.size() || j<word2.size()) return false;
        if(i==word1.size() && k<word1[i-1].size())return false;
        if(j==word2.size() and l<word2[j-1].size()) return false;
        return true;
    }
    
};