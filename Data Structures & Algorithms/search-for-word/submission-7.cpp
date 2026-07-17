class Solution {
public:
    bool makeWord(vector<vector<char>>& board, vector<vector<bool>>& visited, string word, int row, int col, int currPosCheck) {
        if (row < 0 || col < 0 || row >= visited.size() || col >= visited[0].size()) return false;
        if (visited[row][col]) return false;
        if (currPosCheck == word.length() - 1 && word.at(currPosCheck) == board[row][col]) return true;
        // cout << board[row][col] << currPosCheck;
        if (word.at(currPosCheck) == board[row][col]) {
            visited[row][col] = true;
            bool found = (makeWord(board, visited, word, row - 1, col, currPosCheck + 1) || makeWord(board, visited, word, row + 1, col, currPosCheck + 1) || makeWord(board, visited, word, row, col - 1, currPosCheck + 1) || makeWord(board, visited, word, row, col + 1, currPosCheck + 1));
            visited[row][col] = false;
            return found;
        }
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if (word.at(0) != board[i][j]) continue;
                vector<vector<bool>> visited(board.size(), vector<bool> (board[0].size(), false));
                if (makeWord(board, visited, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
