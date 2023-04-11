class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
       	std::vector<std::vector<int>> table{ {1} };

        for (int i = 1; i < numRows; i++)
        {
            table.push_back(std::vector<int>(i + 1));
            for (int j = 0; j < table[i-1].size(); j++)
            {
                table[i][j] += table[i - 1][j];
                table[i][j+1] += table[i - 1][j];
            }
        }
        return table; 
    }
};