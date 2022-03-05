class Solution {
public:
    char findTheDifference(string s, string t) {
//         int arr[26]={0};
//         for(auto &i:t)arr[i-'a']++;
//         for(auto &i:s)arr[i-'a']--;
        
//         char ans;
//         for(int i=0;i<26;i++){
//             if(arr[i]!=0){
//                 ans=i+97; break;
//             }
//         }
//         return ans;
        
//         using xor........
        
        // char ans=0;
        // for(auto &i:s)ans^=i;
        // for(auto &i:t)ans^=i;
        // return ans;
        
        
//         difference of characters....
        
        
        int sum=0;
        for(auto &i:t)sum+=(int)i;
        for(auto &i:s)sum-=(int)i;
        return (char)sum;
        
    }
};