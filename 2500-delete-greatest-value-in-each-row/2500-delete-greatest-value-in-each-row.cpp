class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for (int i = 0; i < m; i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        for (int i = n - 1; i >= 0; i--) 
        {
            int t = 0;
            for (int j = 0; j < m; j++) 
            {
                t = std::max(grid[j][i], t);
            }
            ans += t;
        }
        return ans;
    }
};