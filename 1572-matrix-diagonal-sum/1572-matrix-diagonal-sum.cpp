class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret{};
        for (int i = 0; i < mat.size(); i++)
        {
            ret += mat[i][i];
            if (i != mat.size() - 1 - i)
            {
                ret += mat[i][mat.size() - 1 - i];
            }
        }
        return ret;
    }
};