class Solution {
public:
    bool isUnique(string & str){
        int n = str.size();
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            freq[str[i]-'a']++;
            if(freq[str[i]-'a']>1)return false;
            
        }
        
        return true;
    }
    
   
    void solve(vector<string>& arr, string curr, int idx, int &ans){
       if(isUnique(curr)==false)return;
       if(idx==arr.size()){
           if(isUnique(curr)){
               ans = max<int>(ans,curr.size());
           }
           return;
       }
        
        solve(arr,curr+arr[idx],idx+1,ans);
        solve(arr,curr,idx+1,ans);
    }
    
    
    int maxLength(vector<string>& arr) {
        
        int ans =0;
        solve(arr,"",0,ans);

       
        return ans;
    }

};


