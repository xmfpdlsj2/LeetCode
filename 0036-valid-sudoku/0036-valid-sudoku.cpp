class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        std::vector<std::unordered_set<int>> row(9), col(9), block(9);

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == '.')
                {
                    continue;
                }
                int val = board[i][j];
                int bIndex = (i / 3) * 3 + (j / 3);
                if (!row[i].emplace(val).second)
                {
                    return false;
                }
                if (!col[j].emplace(val).second)
                {
                    return false;
                }
                if (!block[bIndex].emplace(val).second)
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};