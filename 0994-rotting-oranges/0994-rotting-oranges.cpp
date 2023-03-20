class Solution {
public:
    bool IsValid(std::vector<std::vector<int>> grid, int m, int n)
    {
        if (m < 0 || m >= grid.size() || n < 0 || n >= grid[0].size())
        {
            return false;
        }
        return true;
    }
    int orangesRotting(std::vector<std::vector<int>>& grid)
    {
        int freshOrange{}, minute{};
        std::queue<std::pair<int, int>> rottPoss{};

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 2)
                {
                    rottPoss.push({ i, j });
                }
                else if (grid[i][j] == 1)
                {
                    freshOrange++;
                }
            }
        }

        if (freshOrange == 0)
        {
            return 0;
        }

        std::vector<int> nM { -1, 0, 1, 0 };
        std::vector<int> nN { 0, 1, 0, -1 };
        while (!rottPoss.empty())
        {
            int bundle = rottPoss.size();
            while (bundle--)
            {
                auto rp = rottPoss.front();
                rottPoss.pop();
                for (int i = 0; i < nM.size(); i++)
                {
                    int m = rp.first + nM[i];
                    int n = rp.second + nN[i];
                    if (IsValid(grid, m, n) && grid[m][n] == 1)
                    {
                        grid[m][n] = 2;
                        rottPoss.push({ m, n });
                        freshOrange--;
                    }
                }
            }
            minute++;
        }

        return freshOrange != 0 ? -1 : --minute;
    }
};