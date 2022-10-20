class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n = nums.size();
        int  m = nums[0].size();
        int row_start =0, row_end =n-1;
        int col_start=0, col_end=m-1;
        
        while(row_start<row_end){
            for(int i=0;i<m;i++){
                swap(nums[row_start][i], nums[row_end][i]);
                
            }
            row_start++;
            row_end--;
        }
        
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++)cout<<nums[i][j]<<" ";
        //     cout<<endl;
        // }
        
        set<pair<int,int>> st;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(st.find({i,j})==st.end() && st.find({j,i})==st.end())swap(nums[i][j],nums[j][i]);
                st.insert({i,j});
                st.insert({j,i});
            }
        }
    }
};