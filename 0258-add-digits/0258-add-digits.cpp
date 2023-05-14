class Solution {
public:
    int addDigits(int num) 
    {
        while (num >= 10)
        {
            int ret{};
            std::string table{};
            table = std::to_string(num);
            for (int i = 0; i < table.length(); i++)
            {
                ret += table[i] - '0';
            }
            num = ret;
        }
        return num;
    }
};