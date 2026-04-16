class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>>row(board.size()), col(board.size()), box(9);

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){

                if(board[i][j]=='.') continue;
                char num = board[i][j];

                if(row[i].find(num)!= row[i].end()) return false;
                
                if(col[j].find(num)!= col[j].end()) return false;
                
                int boxindex = (i/3)*3 + (j/3);

                if(box[boxindex].find(num)!= box[boxindex].end()) return false;

                row[i].insert(num);
                col[j].insert(num);
                box[boxindex].insert(num);
            }
        }
        return true;  
    }
};
