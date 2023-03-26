class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {

        std::map<int, std::string> digitMap{};
        digitMap[2] = "abc";
        digitMap[3] = "def";
        digitMap[4] = "ghi";
        digitMap[5] = "jkl";
        digitMap[6] = "mno";
        digitMap[7] = "pqrs";
        digitMap[8] = "tuv";
        digitMap[9] = "wxyz";

        std::vector<std::vector<std::string>> table(digits.size() + 1, std::vector<std::string>());
        if (digits.size() == 0)
        {
            return table[0];
        }
        table[0] = { {} };

        for (int i = 0; i < table.size(); i++)
        {
            for (int j = 0; j < table[i].size(); j++)
            {
                if (i < digits.size())
                {
                    for (int k = 0; k < digitMap[digits[i] -'0'].size(); k++)
                    {
                        std::string add{};
                        add.append(table[i][j]);
                        add.push_back(digitMap[digits[i] - '0'][k]);
                        table[i + 1].push_back(add);
                    }
                }
            }
        }

        return table[digits.size()];
    }
};