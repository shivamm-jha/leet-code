class NumMatrix {
public:
    vector<vector<int>> nums;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        nums = vector<vector<int>>(n+1, vector<int>(m+1));
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                nums[i][j] = nums[i-1][j] + nums[i][j-1] 
                    - nums[i-1][j-1] + matrix[i-1][j-1] ;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = nums[row2+1][col2+1];
        int extra = nums[row1][col2+1] + nums[row2+1][col1] - nums[row1][col1];
        return total - extra;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */