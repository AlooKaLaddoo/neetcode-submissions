class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> seenInRow;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (seenInRow.count(board[i][j]))
                        return false;
                    seenInRow.insert(board[i][j]);
                }
            }
        }

        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> seenInCol;
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] != '.')
                {
                    if (seenInCol.count(board[j][i]))
                        return false;
                seenInCol.insert(board[j][i]);
                }
            }
        }

        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> seenInBox;
            for (int j = 0; j < 9; j++)
            {
                int row = ((i / 3) * 3) + (j / 3);
                int col = ((i % 3) * 3) + (j % 3);
                if (board[row][col] != '.')
                {
                    if (seenInBox.count(board[row][col]))
                        return false;
                    seenInBox.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};