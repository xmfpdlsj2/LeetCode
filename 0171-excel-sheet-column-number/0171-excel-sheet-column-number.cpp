class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int digit = columnTitle.size() - 1;
        int ret{};
        for (int i = 0; i < columnTitle.size(); i++)
        {
            ret += (columnTitle[i] - 'A' + 1) * std::pow(26, (digit - i));
        }
        return ret;
    }
};