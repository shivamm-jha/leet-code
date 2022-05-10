class Solution {
public:
    vector<vector<int>> ans;
    void help(vector<int> & empty, int i , int n, int k){
        if(empty.size()==k){
            ans.push_back(empty);
            return;
        }
        if(i>n)return;
        
//         pick
        empty.push_back(i);
        help(empty,i+1,n,k);
        empty.pop_back();
        
//         don't pick
        
        help(empty,i+1,n,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> empty;
        help(empty,1,n,k);
        return ans;
    }
};