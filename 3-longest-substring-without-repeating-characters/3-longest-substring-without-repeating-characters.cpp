class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.size();
        // int ans =0;
//          T.C = 0(N^2)  , S.C = 0(ans)
        // for(int i=0;i<n;++i){
        //     unordered_set<char> st;
        //     for(int j=i;j<n;j++){
        //         if(st.find(s[j])==st.end()){
        //             st.insert(s[j]);
        //         }
        //         else break;
        //     }
        //     ans = max(ans,(int)st.size());
        //     st.clear();
        // }
        // return ans;
        
        
//          T.C = 0(N) , S.C = 0(ANS)
        
//         unordered_map<char,int> hash;
//         int start =0;
//         for(int idx=0;idx<n;++idx){
//             if(hash.find(s[idx])==hash.end()){
//                 hash[s[idx]]=idx;
//                 ans = max(ans, idx-start +1);
                
//             }
//             else{
//                 auto it = hash.find(s[idx]);
//                 int temp = it->second +1;
//                 start = max(start,temp);
//                 hash.erase(it);
//                 hash[s[idx]]=idx;
//                 ans= max(ans, idx - start +1);
//             }
//         }
//         return ans;
        
        
        unordered_set<char> st;
        int i =0 , n= s.size() , j=0 , ans =0;
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
                ans = max(ans,j-i);
            }
            else{
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};