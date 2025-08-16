class Solution {
public:
    bool isValid(int i, int j, int rows, int cols, vector<vector<int>>& grid) {
        return (i >= 0 && i < rows && j >= 0 && j < cols && grid[i][j] == 1);
    }

    int dfs(int i, int j, int rows, int cols, vector<vector<int>>& grid) {
        grid[i][j] = 0; // mark as visited
        int area = 1; // current cell counts as 1

        // Down
        if (isValid(i + 1, j, rows, cols, grid)) {
            area += dfs(i + 1, j, rows, cols, grid);
        }
        // Up
        if (isValid(i - 1, j, rows, cols, grid)) {
            area += dfs(i - 1, j, rows, cols, grid);
        }
        // Left
        if (isValid(i, j - 1, rows, cols, grid)) {
            area += dfs(i, j - 1, rows, cols, grid);
        }
        // Right
        if (isValid(i, j + 1, rows, cols, grid)) {
            area += dfs(i, j + 1, rows, cols, grid);
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        if (rows == 0) return 0;
        int cols = grid[0].size();

        int maxarea = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    int area = dfs(i, j, rows, cols, grid);
                    maxarea = max(maxarea, area);
                }
            }
        }
        return maxarea;
    }
};
