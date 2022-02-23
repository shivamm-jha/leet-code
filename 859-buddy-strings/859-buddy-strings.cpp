class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())return false;
        
//      time complexity 0(n2)...   
        
        
//         for(int i=0;i<s.size()-1;i++){
            
//             for( int j=i+1;j<s.size();j++){
//                 string str = s;
//                 swap(str[i],str[j]);
//                 if(str==goal)return true;
//             }
//         }
//         return false;
        
        int count =0;
        vector<int> freq1(26,0),freq2(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i])count++;
            freq1[s[i]-'a']++;
            freq2[goal[i]-'a']++;
        }
        
        // cout<<count<<endl;
        // for(int i=0;i<26;i++)cout<<freq1[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<26;i++)cout<<freq2[i]<<" ";
        // cout<<endl;
        
        if(count==2 && freq1==freq2)return true;
        if(count==0 && freq1==freq2){
            int flag=0;
            for(int i=0;i<26;i++){
                if(freq1[i]>=2){
                    flag=1; break;
                }
            }
            
            if(flag)return true;
        }
       
        return false;
    }
};