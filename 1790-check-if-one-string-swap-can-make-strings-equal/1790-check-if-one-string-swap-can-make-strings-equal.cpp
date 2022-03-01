class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        if(s1.size()!=s2.size())return false;
        int freq[26]={0};
        for(auto & i:s1)freq[i-'a']++;
        for(auto &i:s2)freq[i-'a']--;
        for(auto &i:freq){
            if(i!=0)return false;
        }
        int count=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])count++;
            if(count>2)return false;
        }
        
        if(count==2)return true;
        return false;
    }
};