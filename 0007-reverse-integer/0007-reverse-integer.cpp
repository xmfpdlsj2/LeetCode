class Solution {
public:
    int reverse(int x) 
    {
        int ret{};
        bool isMinus = false;
        std::string temp{}, reverse{}, int32Max{}, int32Min{};
        int32Max = std::to_string(INT32_MAX);
        int32Min = std::to_string(INT32_MIN);

        isMinus = x < 0 ? true : false;

        temp = std::to_string(x);
        if (!isMinus && temp.size() >= int32Max.size() || isMinus && temp.size() >= int32Max.size() + 1)
        {
            if (isMinus)
            {
                for (int i = temp.size() - 1, j = 1; i >= 0; i--, j++)
                {
                    if (temp[i] > int32Min[j])
                    {
                        return 0;
                    }
                    else if (temp[i] < int32Min[j])
                    {
                        break;
                    }
                }
            }
            else
            {
                for (int i = temp.size() - 1, j = 0; i >= 0; i--, j++)
                {
                    if (temp[i] > int32Max[j])
                    {
                        return 0;
                    }
                    else if (temp[i] < int32Max[j])
                    {
                        break;
                    }
                }
            }
        }

        for (int i = temp.size() - 1; i >= 0; i--)
        {
            if (isMinus && i == 0)
            {
                continue;
            }
            reverse.push_back(temp[i]);
        }

        ret = std::stoi(reverse);
        if (isMinus)
        {
            ret = ret * -1;
        }
        return ret;
    }
};