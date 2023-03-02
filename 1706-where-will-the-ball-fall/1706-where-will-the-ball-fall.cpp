class Solution {
public:
    std::vector<int> findBall(std::vector<std::vector<int>>& grid)
    {
        std::vector<int> result{};
        int m{}, n{}, k{}, l{};
        m = grid.size();
        n = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            k = i;
            for (int j = 0; j < m; j++)
            {
                if (grid[j][k] == 1)
                {
                    if (k + 1 >= n)
                    {
                        k = -1;
                        break;
                    }
                    if (grid[j][k] == grid[j][k + 1])
                    {
                        k++;
                    }
                    else
                    {
                        k = -1;
                        break;
                    }
                }
                else
                {
                    if (k - 1 < 0)
                    {
                        k = -1;
                        break;
                    }
                    if (grid[j][k] == grid[j][k - 1])
                    {
                        k--;
                    }
                    else
                    {
                        k = -1;
                        break;
                    }
                }
            }
            result.push_back(k);
        }
        return result;
    }
};