class Solution {
public:
    
//     function to check elements are distinct or not
    
    // bool are_Distinct(string s, int i, int j){
    //     vector<bool> v(26);
    //     for(int k=i;k<=j;k++){
    //         if(v[s[k]-'a']==true)return false;
    //         v[s[k]-'a']=true;
    //     }
    //     return true;
    // }
    
    
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        
//      brute force sol. time complexity 0(n3).... we are considering all the substrings and then checking whether it has all distinct characters or not
        
        
        //  int res = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //        if(are_Distinct(s,i,j)){
        //             res= max(res,j-i+1);
        //        }
        //     }
        // }
        
        // return res;
        
        
//         sliding window technique.... time complexity 0(n2)
        
        unordered_set<char> st;
        int ans=0;
        int i=0,j=0;
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
                ans= max(ans,j-i);
            }
            else{
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};