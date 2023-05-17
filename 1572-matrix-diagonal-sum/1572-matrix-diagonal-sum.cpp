class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret{};
        for (int i = 0, j = 0; i < mat.size(); i++, j++)
        {
            ret += mat[i][j];
        }
        for (int i = 0, j = mat.size() -1; i < mat.size(); i++, j--)
        {
            ret += mat[i][j];
        }
        if (mat.size() % 2 != 0)
        {
            ret -= mat[mat.size() / 2][mat.size() / 2];
        }
        return ret;
    }
};