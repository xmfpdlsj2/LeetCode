class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int ret{ -1 }, count{};
    	std::vector<int> table(grid.size());
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); ++j) {
                if (i == j) continue;
                if (grid[i][j]) table[j]++;
                else table[i]++;
            }
        }
        for (int i = 0; i < grid.size(); ++i) {
            if (table[i] == 0) { count++; ret = i; }
        }
        return count > 1 ? -1 : ret;
    }
};