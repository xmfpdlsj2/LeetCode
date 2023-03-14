class Solution {
public:
    int RowIndex(std::vector<std::vector<int>>& matrix, int start, int end, int target)
    {
        int index = (start + end) / 2;
        if (matrix[index][0] > target)
        {
            if (index - 1 >= 0)
            {
                if (matrix[index - 1][0] <= target)
                {
                    return index - 1;
                }
                else
                {
                    return RowIndex(matrix, start, index, target);
                }
            }
            return index;
        }
        else
        {
            if (index + 1 < end)
            {
                if (matrix[index + 1][0] > target)
                {
                    return index;
                }
                else
                {
                    return RowIndex(matrix, index, end, target);
                }
            }
            return index;
        }
    }

    bool ColIndex(std::vector<int>& row, int start, int end, int target)
    {
        if (start > end)
        {
            return false;
        }

        int index = (start + end) / 2;
        if (index >= row.size())
        {
            return false;
        }
        if (row[index] == target)
        {
            return true;
        }

        if (row[index] < target)
        {
            return ColIndex(row, index + 1, end, target);
        }
        else
        {
            return ColIndex(row, start, index - 1, target);
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row{}, col{};
        row = matrix.size();
        col = matrix[0].size();
        auto  index = RowIndex(matrix, 0, row, target);
        return ColIndex(matrix[index], 0, col, target);        
    }
};