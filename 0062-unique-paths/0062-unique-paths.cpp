class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        std::vector<std::vector<int>> grid(m, std::vector<int>(n, 1));
        
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                grid[i][j] = grid[i][j - 1] + grid[i - 1][j];
            }
        }
        
        return grid[m - 1][n - 1];
    }
};