class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m>n)return "";
        
        int count=m, start =0, end = 0, minStart =0, minLen = INT_MAX;
        
        vector<int> mp(128,0);
        for(auto &it: t)mp[it]++;
        
        while(end<n){
            if(mp[s[end]]>0){
                count--;
            }
            
            mp[s[end]]--;
            end++;
            
            while(count==0){
                if(end - start<minLen){
                    minStart = start;
                    minLen = end - start;
                }
                
                mp[s[start]]++;
                if(mp[s[start]]>0)count++;
                start++;
            }
        }
        
        return minLen ==INT_MAX? "": s.substr(minStart,minLen);
        
    }
};
