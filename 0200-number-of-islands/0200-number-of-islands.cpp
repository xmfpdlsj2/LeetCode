class Solution {
public:
    void CheckIsland(std::vector<std::vector<char>>& grid, int r, int c)
    {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size())
        {
            return;
        }

        if (grid[r][c] == '1')
        {
            grid[r][c] = '2';
            CheckIsland(grid, r - 1, c);
            CheckIsland(grid, r, c + 1);
            CheckIsland(grid, r + 1, c);
            CheckIsland(grid, r, c - 1);
        }
    }

    int numIslands(std::vector<std::vector<char>>& grid)
    {
        int count{};

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    count++;
                    CheckIsland(grid, i, j);
                }
            }
        }
        return count;
    }
};