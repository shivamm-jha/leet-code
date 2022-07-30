class Solution {
public:
//     bool solve(string &s1, string &s2){
//         vector<int> hash(26,0);
//         for(int i=0;i<s2.size();i++){
//             hash[s2[i]-'a']++;
//         }
        
//         for(int i=0;i<s1.size();i++){
            
//                 hash[s1[i]-'a']--;
            
//         }
        
//         for(int i=0;i<26;i++){
//             if(hash[i]>0)return false;
//         }
//         return true;
//     }
    vector<int> countFreq(string word){
        vector<int>freq(26);
        for(int i=0;i<word.size();i++){
            freq[word[i]-'a']++;
        }
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
//          brute force solution T.C = 0(N^2)
        
        // int n = words1.size();
        // int m = words2.size();
        // vector<string> ans;
        // for(int i=0;i<n;i++){
        //     int flag=1;
        //     string s1 = words1[i];
        //     for(int j=0;j<m;j++){
        //         string s2 = words2[j];
        //         if(solve(s1,s2)==false){
        //             flag=0; break;
        //         }
        //     }
        //     if(flag==1){
        //         ans.push_back(s1);
        //     }
        // }
        // return ans;
        
        vector<int> maxFreq(26);
        for(int i=0;i<words2.size();i++){
            vector<int> freq = countFreq(words2[i]);
            for(int i=0;i<26;i++){
                maxFreq[i]=max(maxFreq[i],freq[i]);
            }
        }
        
        
        vector<string> ans;
        for(int i=0;i<words1.size();i++){
            vector<int> freq = countFreq(words1[i]);
         
            int j=0;
            for(;j<26;j++)if(freq[j]<maxFreq[j])break;
            if(j==26)ans.push_back(words1[i]);
        }
        return ans;
    }
};
