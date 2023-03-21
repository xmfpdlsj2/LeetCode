class Solution {
public:
    bool isValid(std::vector<std::vector<int>>& heights, int r, int c)
    {
        if (r < 0 || r >= heights.size() || c < 0 || c >= heights[0].size())
        {
            return false;
        }
        return true;
    }
    void DFS(std::vector<std::vector<int>>& heights, std::vector<std::vector<bool>>& able, int r, int c)
    {
        able[r][c] = true;

        std::vector<int> nR{ -1, 0, 1, 0 };
        std::vector<int> nC{ 0, 1, 0, -1 };

        for (int i = 0; i < nR.size(); i++)
        {
            int nrR = r + nR[i];
            int ncC = c + nC[i];
            if (isValid(heights, nrR, ncC) && !able[nrR][ncC] && heights[nrR][ncC] >= heights[r][c])
            {
                DFS(heights, able, nrR, ncC);
            }
        }
    }

    std::vector<std::vector<int>> pacificAtlantic(std::vector<std::vector<int>>& heights)
    {
        std::vector<std::vector<int>> ret{};
        std::vector<std::vector<bool>> ablePacific(heights.size(), std::vector<bool>(heights[0].size(), false));
        std::vector<std::vector<bool>> ableAtlantic(heights.size(), std::vector<bool>(heights[0].size(), false));

        for (int i = 0; i < heights.size(); i++)
        {
            DFS(heights, ablePacific, i, 0);
            DFS(heights, ableAtlantic, i, heights[0].size() - 1);
        }
        for (int i = 0; i < heights[0].size(); i++)
        {
            DFS(heights, ablePacific, 0, i);
            DFS(heights, ableAtlantic, heights.size() -1, i);
        }

        for (int i = 0; i < heights.size(); i++)
        {
            for (int j = 0; j < heights[0].size(); j++)
            {
                if (ablePacific[i][j] && ableAtlantic[i][j])
                {
                    ret.push_back({ i, j });
                }
            }
        }
        return ret;
    }
};