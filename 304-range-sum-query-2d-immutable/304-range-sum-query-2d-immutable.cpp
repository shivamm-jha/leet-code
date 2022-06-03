class NumMatrix {
    int [][] row;
    // int [][] col;
    public NumMatrix(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        row = new  int [n][m];
        // col = new  int [n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                row[i][j]=matrix[i][j];
            }
        }
        // for(int i=0;i<n;++i){
        //     for(int j=0;j<m;++j){
        //         col[i][j]=matrix[i][j];
        //     }
        // }
        int rowSum =0;
        for(int i = 0;i<n;++i){
            rowSum=0;
            for(int j=0;j<m;++j){
                rowSum+=row[i][j];
                row[i][j]=rowSum;
            }
        }
    
        // int colSum=0;
        // for(int i=0;i<n;++i){
        //     colSum=0;
        //     for(int j=0;j<m;++j){
        //         colSum+= col[j][i];
        //         col[j][i]=colSum;
        //     }
        // }
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                System.out.print(row[i][j]+" ");
            }
            System.out.print("\n");
        }
        System.out.print("\n");
        // for(int i=0;i<n;++i){
        //     for(int j=0;j<m;++j){
        //         System.out.print(col[i][j]+" ");
        //     }
        //     System.out.print("\n");
        // }
    }
    
    public int sumRegion(int row1, int col1, int row2, int col2) {
        int res =0;
        for(int i=row1;i<=row2;i++){
            int temp = col1 == 0? 0 : row[i][col1-1];
            res+= (row[i][col2] - temp);
        }
        return res;
    }
}

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */