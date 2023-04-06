class Solution {
public:
    bool Check(std::vector<std::vector<bool>>& table, int i, int j, std::string& s)
    {
        if (i == j)
        {
            return table[i][j] = true;
        }
        if (j - i == 1)
        {
            if (s[i] == s[j])
            {
                return table[i][j] = true;
            }
            else
            {
                return table[i][j] = false;
            }
        }

        if (s[i] == s[j] && table[i+1][j-1] == true)
        {
            return table[i][j] = true;
        }
        else
        {
            return table[i][j] = false;
        }
    }
    std::string longestPalindrome(std::string s) 
    {
        int startIndex{}, maxLength{};
        std::vector<std::vector<bool>> table(s.size(), std::vector<bool>(s.size(), false));

        for (int k = 0; k < s.size(); k++)
        {
            for (int i = 0, j = k; j < s.size(); i++, j++)
            {
                Check(table, i, j, s);
                if (table[i][j])
                {
                    if (j - i + 1 > maxLength)
                    {
                        startIndex = i;
                        maxLength = j - i + 1;
                    }
                }
            }
        }
        return s.substr(startIndex, maxLength);
    }
};