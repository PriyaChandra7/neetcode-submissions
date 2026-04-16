class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                int startrow= (i/3)*3;
                int startcol = (j/3)*3;

                if(board[i][j]!='.'){
                    for(int col=0;col<board[i].size();col++){
                        if(col!=j && board[i][col]==board[i][j])
                            return false;
                    }
                     for(int row=0;row<board.size();row++){
                        if(row!=i && board[row][j]==board[i][j])
                            return false;
                    }
                    for(int r=startrow;r<=startrow+2;r++){
                        for(int c=startcol;c<=startcol+2;c++){
                            if((r!=i || c!= j) && board[r][c]==board[i][j])
                                return false;
                        }
                    }
                    
                }
            }
        }
        return true;  
    }
};
