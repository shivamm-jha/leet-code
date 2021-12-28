class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          vector<vector<int> > arr( n, vector<int>(n) );
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        int val=1;
        while(r1<=r2 && c1<=c2){
//             moving left to right
            for(int i=c1;i<=c2;i++){
                arr[r1][i]=val++;
                
            }
//          moving down
            for(int i=r1+1;i<=r2;i++)arr[i][c2]=val++;
                
                if(r1<r2 && c1<c2){
//                     move right to left
                    for(int i=c2-1;i>c1;i--)arr[r2][i]=val++;
                    
//                     move down to up
                    for(int i=r2;i>r1;i--)arr[i][c1]=val++;
                }
            
            r1++,c1++,r2--,c2--;
        }
        return arr;
        
    }
};