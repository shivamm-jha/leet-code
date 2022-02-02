class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int n = s.size();
       int m= p.size();
        vector<int> ans;
       if(m>n) return ans;
        
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(int i=0;i<m;i++){
            hash2[p[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            hash1[s[i]-'a']++;
        }
        
        int i=0,j=m-1;
        while(j<n){
            if(hash1==hash2) ans.push_back(i);
            j++;
            if(j!=n)
                hash1[s[j]-'a']++;
            hash1[s[i]-'a']--;
            i++;
            
        }
        return ans;
        
    }
};


//  vector<int> p_hash(26,0);
//         vector<int> hash(26,0);
//         int window= p.size();
//         int len = s.size();
//         if(len < window) return v;
//         int left=0,right=0;
//         while(right<window){ 
//             p_hash[p[right]-'a']++;
//             hash[s[right]-'a']++;
//             right++;
//         }
//         right-=1;
        
//         while(right<len){ 
//             if(p_hash==hash) v.push_back(left);
//             right++;
//             if(right!=len)
//                 hash[s[right]-'a']++;
//             hash[s[left]-'a']--;
//             left++;
//         }
//         return v;