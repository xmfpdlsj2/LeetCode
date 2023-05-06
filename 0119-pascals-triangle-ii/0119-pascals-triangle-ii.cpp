class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        if (rowIndex == 0)
        {
            return std::vector<int>(1, 1);
        }
        std::vector<std::vector<int>> table(rowIndex + 1);
        table[0].push_back(1);
        table[1].push_back(1);
        table[1].push_back(1);

        for (int i = 2; i < rowIndex + 1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                {
                    table[i].push_back(1);
                }
                else
                {
                    table[i].push_back(table[i - 1][j - 1] + table[i - 1][j]);
                }
            }
        }
        return table[rowIndex];
    }
};