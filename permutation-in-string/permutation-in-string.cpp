class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s2.size();
        
//         extreme brute force solution... time complexity 0(n2 * nlogn)
        
        
        // for(int i=0;i<n;i++){
        //     string res="";
        //     for(int j=i;j<n;j++){
        //         res+=s2[j];
        //         sort(res.begin(),res.end());
        //         if(s1.compare(res)==0){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        
//         better solution 
        
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        if(s1.size()>s2.size())return false;
        int left=0,right=0;
        while(right<s1.size()){
            hash1[s1[right]-'a']++;
            hash2[s2[right]-'a']++;
            right++;
        }
        
        right-=1;
        while(right<n){
            if(hash1==hash2)return true;
            right++;
            if(right!=n){
                hash2[s2[right]-'a']++;
            }
            hash2[s2[left]-'a']-=1;
            left++;
            
        }
        
       return false;
        
    }
};