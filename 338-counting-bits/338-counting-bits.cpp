class Solution {
public:
    int count_bits(int n){
        int count=0,mask=1;
        while(n){
            count+=(mask & n);
            n = n>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count_bits(i));
        }
        return ans;
    }
};