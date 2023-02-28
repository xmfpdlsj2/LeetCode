class Solution {
public:
    std::string Decode(std::string s, int& i)
    {
        std::string result{};
        std::string k{};

        while (s[i] != ']')
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                k.push_back(s[i]);
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                result.push_back(s[i]);
            }
            else if (s[i] == '[')
            {
                int repeat = k.length() != 0 ? std::stoi(k) : 0;
                k.clear();

                std::string lump = Decode(s, ++i);
                for (int j = 0; j < repeat; j++)
                {
                    result.append(lump);
                }
            }
            i++;
        }
        return result;
    }
    std::string decodeString(std::string s)
    {
        std::string result{};
        std::string k{};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                k.push_back(s[i]);
            }
            else if (s[i] == '[')
            {
                int repeat = k.length() != 0 ? std::stoi(k) : 0;
                k.clear();

                std::string lump = Decode(s, ++i);
                for (int j = 0; j < repeat; j++)
                {
                    result.append(lump);
                }
            }
            else
            {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};