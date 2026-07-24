class Solution {
public:
    void includeNeighbours(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& included) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0' || included[i][j]) return;
        included[i][j] = true;
        includeNeighbours(grid, i - 1, j, included);
        includeNeighbours(grid, i + 1, j, included);
        includeNeighbours(grid, i, j - 1, included);
        includeNeighbours(grid, i, j + 1, included);
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> included(grid.size(), vector<bool>(grid[0].size(), false));
        int numIslands = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '0' || included[i][j]) continue;
                numIslands++;
                includeNeighbours(grid, i, j, included);
            }
        }
        return numIslands;
    }
};