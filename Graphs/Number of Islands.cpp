class Solution {
public:
    bool isValid(int i, int j, int rows, int cols, vector<vector<char>>& grid)
	{
        return (i >= 0 && i < rows && j >= 0 && j < cols && grid[i][j] == '1');
    }

    void recursiondfs(int i, int j, int rows, int cols, vector<vector<char>>& grid)
	{
        grid[i][j] = '0';

        if (isValid(i + 1, j, rows, cols, grid))
		{
            recursiondfs(i + 1, j, rows, cols, grid); //Down Call maro
        }
        if (isValid(i - 1, j, rows, cols, grid))
		{
            recursiondfs(i - 1, j, rows, cols, grid); //Upper Call maro
        }
        if (isValid(i, j - 1, rows, cols, grid))
		{
            recursiondfs(i, j - 1, rows, cols, grid); //left Call maro
        }
        if (isValid(i, j + 1, rows, cols, grid))
		{
            recursiondfs(i, j + 1, rows, cols, grid); //Right Call maro
        }
    }

    int numIslands(vector<vector<char>>& grid)
	{
        int rows = grid.size();
        
        if (rows == 0) return 0;
        
        int cols = grid[0].size();
        
		int answer = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    answer++;
                    recursiondfs(i, j, rows, cols, grid);
                }
            }
        }
        return answer;
    }
};
