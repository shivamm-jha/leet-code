class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[0].size();++j){
                if(dfs(board,word,i,j,0)) return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>&board,string &word, int i, int j, int wordIdx){
        if(wordIdx==word.size())return true;
        if(i<0 || i>board.size()-1 || j<0 || j>board[0].size()-1){
            return false;
        }
        
        if(board[i][j]!=word[wordIdx])return false;
      
        board[i][j]='*';
        
        bool search_next = dfs(board,word,i+1,j,wordIdx+1)
            || dfs(board,word,i-1,j,wordIdx+1)
            || dfs(board,word,i,j-1,wordIdx+1)
            || dfs(board,word,i,j+1,wordIdx+1);
        
//         backtrack
        board[i][j]=word[wordIdx];
        return search_next;
        
    }
};
