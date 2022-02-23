class Solution {
public:
    
    bool check(int freq1[], int freq2[]){
        for(int i=0;i<10;i++){
            if(freq2[i]>freq1[i])return false;
        }
        return true;
    }
    
    vector<int> findEvenNumbers(vector<int>& nums) {
        int freq1[10]={0};
        vector<int> ans;
        for(auto &i:nums)freq1[i]++;
        for(int i=100;i<=998;i+=2){
            int freq2[10]={0};
            int num = i;
            while(num){
                freq2[num%10]++;
                num/=10;
            }
            
            if(check(freq1,freq2)){
                ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};