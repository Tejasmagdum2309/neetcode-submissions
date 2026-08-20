class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<int>> row,col,sg;
        
        int n = board.size();
        int sgGroup = 0;
        for(int i = 0;i<n;i++){
            if(i != 0 &&  ( i % 3) == 0) sgGroup+=2;
            for(int j = 0;j<n;j++){
                
                int sgG = ((i / 3) + (j / 3)) + sgGroup;
                if(board[i][j] == '.') continue;
                if(row[i].contains(board[i][j]) || col[j].contains(board[i][j]) || sg[sgG].contains(board[i][j]) ){
                    return false;
                }

                col[j].insert(board[i][j]);
                row[i].insert(board[i][j]);
                sg[sgG].insert(board[i][j]);

            }
        }
        return 1;
    }
};
